/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:03:57 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/28 21:19:03 by pillesca         ###   ########.fr       */
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
	while (i < xy[1])
	{
		j = 0;
		mat[i] = malloc(xy[0] * sizeof(char));
		while (j < xy[0])
		{
			mat[i][j] = c;
			j++;
		}
		i++;
	}
	return (mat);
}

void	add_obst(char **mat, char *buffer, char *c)
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
	write (1, "\n\n", 2);
	while (buffer[i] != '\0')
	{
		if (buffer[i] == c[1])
			mat[y][x] = c[1];
		i++;
		x++;
		if (buffer[i] == '\n')
		{
			x = 0;
			y++;
			i++;
		}
	}
}

int	chk_square(int **matrix, int *xy, int *lxy, char *c)
{
	int	size;

	size = 1;
	return (size);
}

void	chk_matrix(int **matrix, int *xy, char *c)
{
	int	size;
	int	best[3];
	int	lxy[2];

	best[0] = 0;
	lxy[1] = 0;
	while (lxy[1] <= xy[1])
	{
		lxy[0] = 0;
		while (lxy[0] <= xy[0])
		{
			if (matrix[lxy[1]][lxy[0]] != c[1])
			{
				size = chk_square(matrix, xy, lxy, c);
				if (size > best[0])
				{
					best[0] = size;
					best[1] = lxy[0];
					best[2] = lxy[1];
				}
			}
			lxy[0]++;
		}
		lxy[1]++;
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
