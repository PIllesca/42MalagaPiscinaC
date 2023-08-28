/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:03:57 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/28 20:21:30 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

char	**init_matrix(int *xy, char c)
{
	int		i;
	int		j;
	char	**mat;

	i = 0;
	mat = malloc(xy[1] * sizeof(char *));
	while (i < xy[0])
	{
		j = 0;
		mat[i] = malloc(xy[0] * sizeof(char));
		while (j < xy[1])
		{
			mat[i][j] = c;
			j++;
		}
		i++;
	}
	return (mat);
}

void	add_obst(char **mat, char *buffer, char *c, int *xy)
{
	int	i;
	int	x;
	int	y;

	x = 0;
	y = 0;
	i = 0;
	while (buffer[i] != '\n')
		i++;
	write (1, &buffer[i], 90);
	write (1, "\n", 1);
	while (buffer[i] != '\0' && y <= xy[1])
	{
		write(1, &buffer[i], 1);
		if (buffer[i] == c[1] && x <= xy[0])
			mat[x][y] = c[1];
		i++;
		x++;
		if (buffer[i] == '\n')
		{
			x = 0;
			y++;
		}
	}
}

void	free_matrix(int size, char **mat, char *buffer)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(mat[i]);
		i++;
	}
	free(mat);
	free(buffer);
}
