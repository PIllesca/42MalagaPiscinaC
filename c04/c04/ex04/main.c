/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:15:43 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/30 19:15:45 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(INT_MIN, "0123456789");
	return (0);
}
