/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:32:28 by pillesca          #+#    #+#             */
/*   Updated: 2024/03/15 13:15:34 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("H%cla %%Mundo. %d %i %u \n", 'o', 15, -23, -2147483648);
	ft_printf("%d %u %u\n", -2147483648, 2147483647, -1);
	return (0);
}
