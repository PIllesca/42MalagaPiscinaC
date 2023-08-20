/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:53:27 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/19 17:02:02 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_put_hex(char c)
{
	char	h[2];

	h[0] = c / 16 + '0';
	if (h[0] > '9')
		h[0] += 39;
	h[1] = c % 16 + '0';
	if (h[1] > '9')
		h[1] += 39;
	write(1, h, 2);
}

void	ft_put_mem(void *addr)
{
	unsigned long	max;
	unsigned long	nb;
	int				pn;

	max = 1152921504606846976;
	nb = (unsigned long)addr;
	while (max >= 16)
	{
		pn = nb / max + '0';
		if (pn > '0')
			nb %= max;
		if (pn > '9')
			pn += 39;
		write (1, &pn, 1);
		max /= 16;
	}
	pn = nb % 16;
	write (1, &pn, 1);
	write (1, ": ", 2);
}

void	ft_put_ascii(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*c;

	i = 0;
	while (i < size)
	{
		c = addr + i;
		ft_put_hex(*c);
		if (i % 2 != 0)
			write (1, " ", 1);
		i++;
	}
	while (i % 16 != 0)
	{
		write (1, "  ", 2);
		if (i % 2 != 0)
			write (1, " ", 1);
		i++;
	}
}

void	ft_put_str(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		write (1, addr + i, 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 16;
	while (i < size)
	{
		if (i + j > size)
			j = size % 16;
		if (i + j > size)
				j = size % 16;
		ft_put_mem(addr + i);
		ft_put_ascii(addr + i, j);
		ft_put_str(addr + i, j);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
