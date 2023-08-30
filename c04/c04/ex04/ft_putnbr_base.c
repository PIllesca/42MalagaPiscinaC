/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:52:12 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/24 17:59:07 by pillesca         ###   ########.fr       */
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
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-'
				|| base[i] <= ' ')
				return (-1);
			j++;
		}
		i++;
	}
	return (size);
}

int	ft_chkneg(int num, char *base, int size, int *div)
{
	int	i;

	if (num < 0)
	{
		write (1, "-", 1);
		if (num == -2147483648)
		{
			i = (num / *div);
			write (1, &base[i * -1], 1);
			num = num % *div;
			*div /= size;
		}
		num *= -1;
	}
	return (num);
}

int	ft_calcdiv(int num, int size)
{
	int	i;

	i = 1;
	if (num < 0)
	{
		if (num == -2147483648)
			num++;
		num *= -1;
	}
	while (num / size > 0)
	{
		i *= size;
		num /= size;
	}
	return (i);
}

void	ft_printnum(int num, char *base, int size, int div)
{
	int	i;

	num = ft_chkneg(num, base, size, &div);
	while (num == 0 && div > 1)
	{
		write (1, &base[0], 1);
		div /= size;
	}
	while (div >= size)
	{
		i = num / div;
		write (1, &base[i], 1);
		num %= div;
		div /= size;
	}
	write (1, &base[num], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;
	int	div;

	size = ft_chkbase(base);
	if (size < 2)
		return ;
	div = ft_calcdiv(nbr, size);
	if (size < 2)
		return ;
	ft_printnum(nbr, base, size, div);
}
