/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:32:28 by pillesca          #+#    #+#             */
/*   Updated: 2024/03/27 13:12:19 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	i;
	void *ptr;

	i = 154;
	ptr = &i;
	printf("H%cla %%Mundo. %d %i %u \n", 'o', 15, -23, -2147483648);
	ft_printf("H%cla %%Mundo. %d %i %u \n", 'o', 15, -23, -2147483648);
	printf("%d %u %u\n", -2147483648, 2147483647, -1);
	ft_printf("%d %u %u\n", -2147483648, 2147483647, -1);
	printf("%d %u %u\n", -2147483648, 2147483647, -1);
	ft_printf("%d %u %u\n", -2147483648, 2147483647, -1);
	printf("%x %X %p\n", i, i, ptr);
	ft_printf("%x %X %p\n", i, i, ptr);
	return (0);
}
