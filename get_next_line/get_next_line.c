/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:14:58 by pillesca          #+#    #+#             */
/*   Updated: 2023/10/09 18:37:33 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
		if (size == 0)
		{
			free(str);
			break ;
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
	if (buffer[i] == '\n')
		line = ft_calloc(i + 2, sizeof(char));
	else
		line = ft_calloc(i + 1, sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
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

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) == -1)
		return (NULL);
	if (!buffer)
		buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	buffer = ft_read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_get_cline(buffer);
	if (!line)
		return (ft_free_null(buffer));
	buffer = ft_get_nline(buffer);
	if (buffer && !*buffer)
		buffer = ft_free_null(buffer);
	return (line);
}
