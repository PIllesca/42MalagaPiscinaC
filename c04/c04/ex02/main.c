/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:12:07 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/26 20:01:27 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <limits.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(0);
	write (1, "\n", 1);
	ft_putnbr(INT_MAX);
	write (1, "\n", 1);
	ft_putnbr(INT_MIN);
	write (1, "\n", 1);
	ft_putnbr(INT_MIN + 1);
	write (1, "\n", 1);
	ft_putnbr(10001);
	write (1, "\n", 1);
	ft_putnbr(1000);
}
