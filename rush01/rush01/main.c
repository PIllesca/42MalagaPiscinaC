/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:49:08 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/20 21:46:28 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define SIZE 4

void	draw_matrix(int matrix[SIZE][SIZE]);
void	draw_clue(int col[2][SIZE], int row[2][SIZE]);
void	init_matrix(int matrix[SIZE][SIZE]);
void	add_clue_w(char *str, int col[2][SIZE], int row[2][SIZE]);
void	ft_fillmatrix(int matrix[SIZE][SIZE], int cl[2][SIZE], int rw[2][SIZE]);
//char str[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
//char str[] = "4 2 2 1 1 2 3 3 4 2 2 1 1 2 3 3";
//char str[] = "1 2 2 2 4 1 3 2 1 2 3 2 3 2 1 2";

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	int		col[2][SIZE];
	int		row[2][SIZE];
	int		matrix[SIZE][SIZE];
	char	str[35];

	ft_strcpy(str, "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2");
	init_matrix(matrix);
	add_clue_w(str, col, row);
	draw_clue(col, row);
	ft_fillmatrix(matrix, col, row);
	draw_matrix(matrix);
	return (0);
}
