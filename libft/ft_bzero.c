/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:25:00 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/13 12:13:37 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que escribre n bytes de valor zero en la cadena s

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = s;
	while (n > 0)
	{
		*str = 0;
		str++;
		n--;
	}
	return ;
}
