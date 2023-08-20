/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 12:15:47 by vnaslund          #+#    #+#             */
/*   Updated: 2023/08/13 17:59:00 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

int	ft_error_ck(int c, int l)
{
	int	r;

	r = 0;
	if (c <= 0 || l <= 0)
	{
		ft_putchar('e');
		r = 1;
	}
	return (r);
}

void	ft_draw_char(int c, int l, int cl, int f)
{
	if ((cl == c && f == l) || (cl == 1 && f == 1 && l != 1 && c != 1))
		ft_putchar('/');
	else if ((cl == c && f == 1) || (cl == 1 && f == l))
		ft_putchar('\\');
	else if (!(cl == c || cl == 1) && !(f == 1 || f == l))
		ft_putchar(' ');
	else
		ft_putchar('*');
}

void	rush(int x, int y)
{
	int	cl;
	int	f;

	if (ft_error_ck(x, y) == 0)
	{
		f = y;
		while (f > 0)
		{
			cl = x;
			while (cl > 0)
			{
				ft_draw_char(x, y, cl, f);
				cl--;
			}
			ft_putchar('\n');
			f--;
		}
	}
}
