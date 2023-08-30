/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:01:24 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/26 19:55:05 by pillesca         ###   ########.fr       */
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
	long	div;
	int		pn;

	nb = ft_chkneg(nb);
	div = 1;
	while (div * 10 <= (long)nb)
	{
		div *= 10;
	}	
	while (div >= 10)
	{
		pn = nb / div;
		ft_printn (pn);
		if (pn > 0)
		{
			nb %= div;
		}
		div /= 10;
	}
	ft_printn(nb % 10);
}
