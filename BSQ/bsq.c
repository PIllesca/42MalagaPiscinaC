/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:13:41 by sborrego          #+#    #+#             */
/*   Updated: 2023/08/29 14:28:26 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_min(int a, int b, int c)
{
	if (a <= b && a <= c)
	{
		return (a);
	}
	else if (b <= c)
	{
		return (b);
	}
	else
	{
		return (c);
	}
}

int	**init_aux(int *xy)
{
	int		i;
	int		j;
	int		**aux;

	i = 0;
	aux = malloc(xy[1] * sizeof(int *));
	while (i < xy[1])
	{
		j = 0;
		aux[i] = malloc(xy[0] * sizeof(int));
		while (j < xy[0])
		{
			aux[i][j] = 1;
			j++;
		}
		i++;
	}
	return (aux);
}

int	**find_biggest(int *xy, char **mat, char *c, int *max)
{
	int	**aux;
	int	i;
	int	j;

	aux = init_aux(xy);
	i = 0;
	while (i < xy[1])
	{
		j = 0;
		while (j < xy[0])
		{
			if (mat[i][j] == c[1])
				aux[i][j] = 0;
			else if (i == 0 || j == 0)
				aux[i][j] = 1;
			else
				aux[i][j] = ft_min(aux[i -1][j -1], aux[i -1][j],
						aux[i][j -1]) + 1;
			if (max[0] < aux[i][j])
				max[0] = aux[i][j];
			j++;
		}
		i++;
	}
	return (aux);
}

void	free_aux(int *xy, int **aux, int max, int *lxy)
{
	int	i;
	int	j;

	i = xy[1] -1;
	while (i >= 0)
	{
		j = xy[0] -1;
		while (j >= 0)
		{
			if (aux[i][j] == max)
			{
				lxy[1] = i;
				lxy[0] = j;
			}
			j--;
		}
		free(aux[i]);
		i--;
	}
	free(aux);
}

void	ft_bsq(int *xy, char **mat, char *c)
{
	int	max;
	int	**aux;
	int	*lxy;
	int	i;
	int	j;

	lxy = malloc(sizeof (int) * 2);
	max = 0;
	aux = find_biggest(xy, mat, c, &max);
	free_aux(xy, aux, max, lxy);
	i = lxy[1] - (max -1);
	while (i <= lxy[1])
	{
		j = lxy[0] - (max -1);
		while (j <= lxy[0])
		{
			mat[i][j] = c[2];
			j++;
		}
		i++;
	}
	free (lxy);
}
