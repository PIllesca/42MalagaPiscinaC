/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:40:20 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/16 12:12:36 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Funcion que concatena src a dst, con un maximo de dstsize caracteres y
// devuelve la longitud de src + la longitud de dst

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*dst && i < dstsize)
	{
		dst++;
		i++;
	}
	while (*src && i + 1 < dstsize)
	{
		*dst = *src;
		i++;
		dst++;
		src++;
	}
	if (i < dstsize)
		*dst = '\0';
	return (i + ft_strlen(src));
}
