/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:19:56 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/14 13:08:44 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

// Función que copia n bytes de la cadena src a dst y devuelve un puntero a dst.

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*str;

	dest = dst;
	str = (char *)src;
	if (dest < str)
	{
		while (len > 0)
		{
			*dest = *str;
			dest++;
			str++;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			dest[len - 1] = str[len - 1];
			len--;
		}
	}
	return (dst);
}
