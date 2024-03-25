/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:00:24 by pillesca          #+#    #+#             */
/*   Updated: 2024/03/25 17:40:54 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_puthex(int num)
{
    char str[18];

    ft_inthex(num, str);
    ft_putstr_fd(str,1);
}

void    ft_putuhex(int num)
{
    char str[18];

    ft_inthex(num, str);
    ft_striteri(str, &to_upper);
    ft_putstr_fd(str,1);
}

void    ft_putmhex(void *p)
{
    char str[18];

    ft_inthex((size_t)&p, str);
    ft_putstr_fd(str,1);
}