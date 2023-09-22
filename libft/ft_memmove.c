/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:19:56 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/22 12:42:25 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que copia n bytes de la cadena src a dst y devuelve un puntero a dst.

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*str;

	if (dst == NULL && src == NULL)
		return (dst);
	dest = dst;
	str = (char *)src;
	if (dest < str)
	{
		while (len--)
			*dest++ = *str++;
	}
	else
	{
		while (len--)
			dest[len] = str[len];
	}
	return (dst);
}
