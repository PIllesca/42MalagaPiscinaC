/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:03:14 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/20 21:30:03 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define SIZE 4

// Rellenar columna completa
void	ft_fill_column(int matrix[SIZE][SIZE], int i, int j)
{
	int	k;

	k = 0;
	while (k < SIZE)
	{
		if (i == 0)
			matrix[k][j] = k + 1;
		else
			matrix[k][j] = SIZE - k;
		k++;
	}
}

// Rellenar fila completa
void	ft_fill_row(int matrix[SIZE][SIZE], int i, int j)
{
	int	k;

	k = 0;
	while (k < SIZE)
	{
		if (i == 0)
			matrix[j][k] = k + 1;
		else
			matrix[j][k] = SIZE - k;
		k++;
	}
}

// Rellenar tamaño máximo
void	ft_fill_max(int matrix[SIZE][SIZE], int col[2][SIZE], int row[2][SIZE])
{
	int	i;
	int	j;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < SIZE)
		{
			if (col[i][j] == SIZE)
				ft_fill_column(matrix, i, j);
			if (row[i][j] == SIZE)
				ft_fill_row(matrix, i, j);
			j++;
		}
		i++;
	}
}
