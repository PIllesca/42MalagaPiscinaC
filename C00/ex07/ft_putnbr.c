/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 13:18:36 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/13 17:51:43 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	max;
	int	pn;

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	max = 1000000000;
	while (max >= 10)
	{
		pn = nb / max;
		if (pn > 0)
		{
			ft_putchar (pn + '0');
			nb %= max;
		}
		max /= 10;
	}
	ft_putchar (nb % 10 + '0');
}
