/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:29:21 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/16 12:52:33 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que busca un caracter c en los primeros n caracteres de la cadena s
// devuelve un puntero al caracter encontrado o NULL si no lo encuentra

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;

	chr = (unsigned char)c;
	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str == chr)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
