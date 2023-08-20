/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:19:43 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/16 18:27:44 by pillesca         ###   ########.fr       */
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

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= ' ' && *str <= '~')
			write(1, str, 1);
		else
		{
			write(1, "\\", 1);
			ft_put_hex(*str);
		}
		str++;
	}
}
