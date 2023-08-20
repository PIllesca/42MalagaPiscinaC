/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:03:14 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/20 21:30:28 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define SIZE 4

// Buscar número en fila
int	ft_find_row(int matrix[SIZE][SIZE], int row, int nb)
{
	int	i;
	int	rt;

	i = 0;
	rt = 0;
	while (i < SIZE)
	{
		if (matrix [row][i] == nb)
			rt = 1;
		i++;
	}
	return (rt);
}

// Buscar número en columna
int	ft_find_col(int matrix[SIZE][SIZE], int col, int nb)
{
	int	i;
	int	rt;

	i = 0;
	rt = 0;
	while (i < SIZE)
	{
		if (matrix [i][col] == nb)
			rt = 1;
		i++;
	}
	return (rt);
}
