/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:03:14 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/20 21:31:22 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define SIZE 4
#define UP 0
#define DW 1
#define LF 0
#define RG 1

void	ft_fill_max(int matrix[SIZE][SIZE], int col[2][SIZE], int row[2][SIZE]);

int		ft_find_row(int matrix[SIZE][SIZE], int row, int nb);

int		ft_find_col(int matrix[SIZE][SIZE], int col, int nb);

// Rellenar los 4 a los bordes
void	ft_fill_one(int matrix[SIZE][SIZE], int col[2][SIZE], int row[2][SIZE])
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (col[UP][i] == 1)
			matrix[0][i] = 4;
		if (row[LF][i] == 1)
			matrix[i][0] = 4;
		if (col[DW][i] == 1)
			matrix[3][i] = 4;
		if (row[RG][i] == 1)
			matrix[i][3] = 4;
		i++;
	}
}

// Si clue dice 3 y no esta el 4 en la fila o columna poner 4 en el penultimo
void	ft_find_four(int matrix[SIZE][SIZE], int col[2][SIZE], int row[2][SIZE])
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (col[UP][i] == 3 && !ft_find_col(matrix, i, 4))
			matrix[2][i] = 4;
		if (col[DW][i] == 3 && !ft_find_col(matrix, i, 4))
			matrix[1][i] = 4;
		if (row[LF][i] == 3 && !ft_find_row(matrix, i, 4))
			matrix[i][2] = 4;
		if (row[DW][i] == 3 && !ft_find_row(matrix, i, 4))
			matrix[i][1] = 4;
		i++;
	}
}

// Intento de encontrar los 3
void	ft_find_three(int matrix[SIZE][SIZE], int cl[2][SIZE], int rw[2][SIZE])
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (cl[UP][i] == 3 && matrix[i][0] == 2 && matrix[i][2] == 4)
			matrix[i][1] = 3;
		if (cl[DW][i] == 3 && matrix[i][3] == 2 && matrix[i][1] == 4)
			matrix[i][2] = 3;
		if (rw[LF][i] == 3 && matrix[0][i] == 2 && matrix[2][i] == 4)
			matrix[1][i] = 3;
		if (rw[DW][i] == 3 && matrix[3][i] == 2 && matrix[1][i] == 4)
			matrix[2][i] = 3;
		if (cl[UP][i] == 2 && matrix[i][0] == 0 && matrix[i][3] == 4)
			matrix[i][0] = 3;
		if (cl[DW][i] == 2 && matrix[i][3] == 0 && matrix[i][0] == 4)
			matrix[i][3] = 3;
		if (rw[LF][i] == 2 && matrix[0][i] == 0 && matrix[3][i] == 4)
			matrix[0][i] = 3;
		if (rw[DW][i] == 2 && matrix[3][i] == 0 && matrix[0][i] == 4)
			matrix[3][i] = 3;
		i++;
	}
}

// Rellenar la matriz
void	ft_fillmatrix(int matrix[SIZE][SIZE], int cl[2][SIZE], int rw[2][SIZE])
{
	ft_fill_max(matrix, cl, rw);
	ft_fill_one(matrix, cl, rw);
	ft_find_four(matrix, cl, rw);
	ft_find_three(matrix, cl, rw);
}
