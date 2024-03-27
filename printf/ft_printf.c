/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:56:49 by pillesca          #+#    #+#             */
/*   Updated: 2024/03/27 12:19:02 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(int i)
{
	if (i == -2147483648)
		ft_putstr_fd("2147483648", 1);
	else if (i < 0)
	{
		i = i * -1;
		ft_putnbr_fd(i, 1);
	}
	else
		ft_putnbr_fd(i, 1);
}

int	chk_format(char c, va_list args, int i)
{
	if (c == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (c == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (c == '%')
		ft_putchar_fd('%', 1);
	else if (c == 'i' || c == 'd')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (c == 'u')
		ft_putnbr_u(va_arg(args, int));
	else if (c == 'x')
		ft_puthex(va_arg(args, int));
	else if (c == 'X')
		ft_putuhex(va_arg(args, int));
	else if (c == 'p')
		ft_putmhex(va_arg(args, void *));
	i++;
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	va_start(args, str);
	i = 0;
	while (*str)
	{
		if (*str != '%')
			ft_putchar_fd(*str, 1);
		else
		{
			str++;
			chk_format(*str, args, i);
		}
		str++;
	}
	va_end(args);
	return (i);
}
