/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:36:52 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/20 20:47:52 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#define SIZE 4
#define UP 0
#define DW 1
#define LF 0
#define RG 1

// Imprime número
void	ft_putnumber(int x)
{
	char	c;

	c = x + '0';
	write (1, &c, 1);
}

// Dibuja la matriz
void	draw_matrix(int matrix[SIZE][SIZE])
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			ft_putnumber(matrix[i][j]);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

// Dibujar las pistas para pruebas
void	draw_clue(int col[2][SIZE], int row[2][SIZE])
{
	int	i;
	int	j;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < SIZE)
		{
			ft_putnumber(col[i][j]);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	j = 0;
	while (j < SIZE)
	{
		ft_putnumber(row[0][j]);
		write(1, " ", 1);
		ft_putnumber(row[1][j]);
		write(1, "\n", 1);
		j++;
	}
}
