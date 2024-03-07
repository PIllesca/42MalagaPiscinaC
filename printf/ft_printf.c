/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:56:49 by pillesca          #+#    #+#             */
/*   Updated: 2024/03/07 13:31:34 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	va_start(args, str);
	i = 0;
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	ft_putchar_fd('\n', 1);
	va_end(args);
	return (i);
}
