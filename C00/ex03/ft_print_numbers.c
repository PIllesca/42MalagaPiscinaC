/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:01:23 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/13 19:14:47 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_num(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	n;

	n = 0;
	while (n <= 9)
	{
		ft_put_num(n);
		n++;
	}
}
