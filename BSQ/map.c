/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:14:49 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/28 19:45:41 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BSIZE 1024

int	open_map(char *fname)
{
	int	file;

	file = open(fname, 0);
	if (file < 0)
	{
		write(1, "map error\n", 10);
		exit(1);
	}
	return (file);
}

int	read_file(int fid, char **buffer)
{
	int	size;

	*buffer = malloc(sizeof(char) * BSIZE);
	size = read(fid, *buffer, BSIZE);
	return (size);
}

void	read_buffer(char *buffer, int *xy, char *c, int size)
{
	int		i;

	i = 0;
	while (buffer[i] >= '0' && buffer[i] <= '9')
		i++;
	c[0] = buffer[i];
	c[1] = buffer[i + 1];
	c[2] = buffer[i + 2];
	while (buffer[i] != '\n')
		i++;
	xy[0] = 0;
	xy[1] = 0;
	while (buffer[i + 1] != '\n')
	{
		xy[0]++;
		i++;
	}
	while (i < size)
	{
		if (buffer[i] == '\n')
			xy[1]++;
		i++;
	}
}

void	read_map(char *fname, char **buffer, char *c, int *xy)
{
	int	fid;
	int	size;

	fid = open_map(fname);
	if (fid >= 0)
	{
		size = read_file(fid, buffer);
		read_buffer(*buffer, xy, c, size);
	}
	close(fid);
}
