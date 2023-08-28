/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:22:09 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/28 20:52:36 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

char	**init_matrix(int *xy, char c);

void	draw_matrix(char **mat, int *xy);

void	free_matrix(int size, char**mat, char *buffer);

void	add_obst(char **mat, char *buffer, char *c);

void	read_map(char *fname, char **buffer, char *c, int *xy);

int	main(int argc, char *argv[])
{
	char	**mat;
	char	*buffer;
	int		xy[2];
	char	c[3];
	int		i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			read_map(argv[i], &buffer, c, xy);
			mat = init_matrix(xy, c[0]);
			add_obst(mat, buffer, c);
			draw_matrix(mat, xy);
			free_matrix(xy[1], mat, buffer);
			i++;
		}
	}
	else
	{
		write (1, "error map\n", 10);
		exit(1);
	}
	return (0);
}
