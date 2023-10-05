/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:36:52 by pillesca          #+#    #+#             */
/*   Updated: 2023/10/05 19:27:28 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdlib.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t	ft_strlen(const char *str)
{
	const char	*ptr;

	ptr = str;
	while (*str)
		str++;
	return (str - ptr);
}

// Función que reserva memoria para un array de n elementos de tamaño size y
// rellena el array con 0 en cada byte

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	count *= size;
	while (count--)
		((char *)ptr)[count] = 0;
	return (ptr);
}

// Función que devuelve un puntero a la primera ocurrencia del carácter c en la
// cadena s

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	if (*str == (char)c)
		return (str);
	return (NULL);
}

// Función que concatena dos cadenas

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;
	size_t	i;
	size_t	j;

	size = ft_strlen(s1) + ft_strlen(s2);
	str = ft_calloc(size + 1, sizeof(char));
	if (!str || !s1 || !s2)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && i < size - 1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0' && i < size)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	if (i < size)
		str[size] = '\0';
	return (str);
}

// Función que reserva memoria para una copia de la cadena de caracteres s1
// copia s1 en la memoria reservada y devuelve un puntero a la nueva cadena.

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*ptr;
	size_t	size;

	size = ft_strlen(s1);
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (NULL);
	ptr = str;
	while (size--)
		*str++ = *s1++;
	return (ptr);
}

/**
 * @brief Función que libera la memoria de la cadena recibida y devuelve NULL
 *  para controlar errores
 * @param str cadena a liberar
 * @return NULL
 */

static char	*ft_free_null(char *str)
{
	if (str)
		free(str);
	return (NULL);
}

/**
 * @brief Función que lee el archivo con el file descriptor recibido y guarda
 * hasta el primer salto de línea o el final del archivo en el buffer.
 * @param fd file descriptor del archivo a leer
 * @param buffer cadena donde se guardará el contenido del archivo
 * @return buffer con el contenido del archivo
*/

static char	*ft_read_file(int fd, char *buffer)
{
	size_t	size;
	char	*str;

	size = 1;
	while (size > 0)
	{
		str = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
		if (!str)
			return (ft_free_null(buffer));
		size = read(fd, str, BUFFER_SIZE);
		if (size < 0)
		{
			free(str);
			return (ft_free_null(buffer));
		}
		str[size] = '\0';
		buffer = ft_strjoin(buffer, str);
		free(str);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	if (size == 0 && *buffer == '\0')
		return (ft_free_null(buffer));
	return (buffer);
}

/**
 * @brief Función que devuelve la primera línea del buffer
 * @param buffer cadena de la que se extraerá la primera línea
 * @return la primera línea del buffer
*/

static char	*ft_get_cline(char *buffer)
{
	char	*line;
	size_t	i;

	if (!buffer || !*buffer)
		return (NULL);
	i = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n' || buffer[i] == '\0')
		line[i++] = '\n';
	return (line);
}

/**
 * @brief Función que devuelve la cadena tras el primer salto de línea
 * @param buffer cadena a modificar
 * @return la cadena tras el primer salto de línea
*/

static char	*ft_get_nline(char *buffer)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\0')
		return (ft_free_null(buffer));
	str = ft_calloc((ft_strlen(buffer) - i), sizeof(char));
	if (!str)
		return (ft_free_null(buffer));
	i++;
	j = 0;
	while (buffer[i] != '\0')
		str[j++] = buffer[i++];
	free(buffer);
	return (str);
}
/**
 * @brief Función que lee el archivo con el file descriptor recibido y devuelve
 * la siguiente línea del archivo
 * @param fd file descriptor del archivo a leer
 * @return la siguiente línea del archivo
*/

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!buffer)
		buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	buffer = ft_read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_get_cline(buffer);
	if (!line)
		return (NULL);
	buffer = ft_get_nline(buffer);
	if (buffer && *buffer == '\0')
	{
		free(buffer);
		buffer = NULL;
	}
	return (line);
}

#include <fcntl.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*str;
	int		fd;

	if (argc == 1)
		fd = open ("test1.txt", 0);
	else
		fd = open (argv[1], 0);
	if (fd < 0)
	{
		printf("Error de lectura\n");
		return (1);
	}
	str = get_next_line(fd);
	while (str != NULL)
	{
		printf("%s\n", str);
		free(str);
		str = get_next_line(fd);
	}
	close(fd);
	return (0);
}
