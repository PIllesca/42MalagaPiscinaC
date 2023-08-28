/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:03:57 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/28 17:41:57 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

char	**init_matrix(int size, char c)
{
	int		i;
	int		j;
	char	**mat;

	i = 0;
	mat = malloc(size * sizeof(char *));
	while (i < size)
	{
		j = 0;
		mat[i] = malloc(size * sizeof(char));
		while (j < size)
		{
			mat[i][j] = c;
			j++;
		}
		i++;
	}
	return (mat);
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
