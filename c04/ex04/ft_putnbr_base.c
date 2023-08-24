/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:52:12 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/24 13:56:11 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_chkbase(char *base)
{
	int	i;
	int	j;
	int	size;

	if (base == 0)
		return (-1);
	size = 0;
	while (base[size] != '\0')
		size++;
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-')
				return (-1);
			j++;
		}
		i++;
	}
	return (size);
}

int	ft_chkneg(int num, char *base, int size)
{
	int	i;

	if (num < 0)
	{
		write (1, "-", 1);
		if (num == -2147483648)
		{
			i = (num / size);
			write (1, &base[i * -1], 1);
			num = i;
		}
		num *= -1;
	}
	return (num);
}

void	ft_printnum(int num, char *base, int size)
{
	int	i;

	num = ft_chkneg(num, base, size);
	while (num > size)
	{
		i = num / size;
		write (1, &base[i], 1);
		num = i;
	}
	write (1, &base[num % size], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = ft_chkbase(base);
	if (size < 2)
		return ;
	ft_printnum(nbr, base, size);
}
