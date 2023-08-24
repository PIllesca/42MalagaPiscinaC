/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:01:24 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/22 17:57:45 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_printn(int i)
{
	char	c;

	c = i + '0';
	write (1, &c, 1);
}

int	ft_chkneg(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb != -2147483648)
			nb *= -1;
		else
		{
			ft_printn(2);
			nb = nb % 1000000000;
			nb *= -1;
		}
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	int	max;
	int	pn;

	nb = ft_chkneg(nb);
	max = 1000000000;
	while (max >= 10)
	{
		pn = nb / max;
		if (pn > 0)
		{
			ft_printn (pn);
			nb %= max;
		}
		max /= 10;
	}
	ft_printn(nb % 10);
}
