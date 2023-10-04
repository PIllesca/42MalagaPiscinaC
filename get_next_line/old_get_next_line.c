/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:10:47 by pillesca          #+#    #+#             */
/*   Updated: 2023/10/01 16:41:51 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_get_line(char *buffer)
{
	char	*str;
	size_t	i;

	if (!*buffer)
		return (NULL);
	i = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	str = ft_calloc(i +2, sizeof(char));
	i = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
	{
		str[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n' || buffer[i] == '\0')
		str[i++] = '\n';
	return (str);
}

static char	*ft_get_next(char *buffer)
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

static char	*ft_read_file(int fd, char *old_str)
{
	char	*str;
	char	*tmp;
	size_t	size;

	if (!old_str)
		old_str = ft_calloc(1, sizeof(char));
	str = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	size = 1;
	while (size > 0)
	{
		size = read(fd, str, BUFFER_SIZE);
		if (size <= 0)
		{
			free(str);
			return (NULL);
		}
		str[size] = '\0';
		tmp = ft_strjoin(old_str, str);
		free(old_str);
		old_str = tmp;
		if (ft_strchr(str, '\n'))
			break ;
	}
	free(str);
	return (old_str);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer = ft_read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_get_line(buffer);
	buffer = ft_get_next(buffer);
	return (line);
}
