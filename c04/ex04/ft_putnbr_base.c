/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:52:12 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/24 13:26:49 by pillesca         ###   ########.fr       */
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
			if (base[i] == base[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (size);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = ft_chkbase(base);
	if (size < 2)
		return ;
}
