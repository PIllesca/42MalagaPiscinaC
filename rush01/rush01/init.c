/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:58:48 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/20 21:30:50 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define SIZE 4

// Añadir las pistas con bucle
void	add_clue_w(char *str, int col[2][SIZE], int row[2][SIZE])
{
	int	i;
	int	j;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < SIZE)
		{
			col[i][j] = str[i * SIZE * 2 + j * 2] - '0';
			row[i][j] = str[i * SIZE * 2 + j * 2 + SIZE * 4] - '0';
			j++;
		}
		i++;
	}
}

// Inicializar la matriz
void	init_matrix(int matrix[SIZE][SIZE])
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			matrix[j][i] = 0;
			j++;
		}
		i++;
	}
}
