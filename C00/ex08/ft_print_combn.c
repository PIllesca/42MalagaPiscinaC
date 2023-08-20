/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:04:06 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/13 18:27:54 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_num(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int nbs[10];

	nbs[0] = 0;
	while (n > 0)
	{

		n--;
	}	
}
