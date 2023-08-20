/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:11:52 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/13 12:58:26 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_num(int i)
{
	int	c;

	if (i < 10)
	{
		ft_putchar('0');
		ft_putchar(i + '0');
	}
	else
	{
		ft_putchar(i / 10 + '0');
		ft_putchar(i % 10 + '0');
	}
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;

	n1 = 0;
	while (n1 < 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			if (n1 != 0 || n2 != 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_print_num(n1);
			ft_putchar(' ');
			ft_print_num(n2);
			n2++;
		}
		n1++;
	}
}
