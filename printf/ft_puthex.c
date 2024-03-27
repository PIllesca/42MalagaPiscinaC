/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:00:24 by pillesca          #+#    #+#             */
/*   Updated: 2024/03/27 13:24:10 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(int num)
{
	char	str[20];

	ft_inthex(num, str);
	ft_putstr_fd(str, 1);
}

void	ft_putuhex(int num)
{
	char	str[20];

	ft_inthex(num, str);
	ft_striteri(str, &to_upper);
	ft_putstr_fd(str, 1);
}

void	ft_putmhex(void *p)
{
	char	str[18];

	ft_putstr_fd("0x", 1);
	ft_inthex((long int)p, str);
	ft_putstr_fd(str, 1);
}
