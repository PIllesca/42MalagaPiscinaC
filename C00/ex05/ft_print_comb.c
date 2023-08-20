/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:58:42 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/13 20:01:37 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnum(int n)
{
	ft_putchar(n + '0');
}

void	ft_print_nums(int n[])
{
	int	c;

	c = 0;
	if (n[0] != n[1] && n[0] != n[2] && n[1] != n[2])
	{
		if (n[0] != 0 || n[2] != 2)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		while (c < 3)
		{
			ft_putnum(n[c]);
			c++;
		}
	}
}

void	ft_print_comb(void)
{
	int	n[3];

	n[0] = 0;
	while (n[0] <= 9)
	{
		n[1] = n[0] + 1;
		while (n[1] <= 9)
		{
			n[2] = n [1] + 1;
			while (n[2] <= 9)
			{
				ft_print_nums(n);
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}
