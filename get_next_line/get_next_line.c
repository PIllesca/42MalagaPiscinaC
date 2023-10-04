/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:14:58 by pillesca          #+#    #+#             */
/*   Updated: 2023/10/04 13:43:54 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// Función que lee el archivo con el file descriptor recibido y guarda hasta el
// primer salto de línea o el final del archivo en el buffer.

static char	*ft_read_file(int fd, char *buffer)
{
	size_t	size;
	char	*str;

	size = 1;
	while (size > 0)
	{
		str = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
		size = read(fd, str, BUFFER_SIZE);
		if (size <= 0)
		{
			free(str);
			return (NULL);
		}
		str[size] = '\0';
		buffer = ft_strjoin(buffer, str);
		free(str);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (buffer);
}

// Función que devuelve la primera línea del buffer

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

// Función que devuelve el buffer tras el primer salto de línea

static char	*ft_get_nline(char *buffer)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\0')
	{
		free(buffer);
		return (NULL);
	}
	str = ft_calloc((ft_strlen(buffer) - i - 1), sizeof(char));
	i++;
	j = 0;
	while (buffer[i] != '\0')
		str[j++] = buffer[i++];
	free(buffer);
	return (str);
}
// Función que lee el archivo con el file descriptor recibido y devuelve la
// siguiente línea del archivo

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
	}
	return (line);
}
