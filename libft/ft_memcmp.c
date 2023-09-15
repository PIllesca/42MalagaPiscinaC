/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:45:12 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/13 12:54:07 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

// Función que compara los primeros n caracteres de las cadenas s1 y s2
// devuelve 0 si son iguales o la diferencia entre el valor ascii del primer
// caracter diferente

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	while (n > 0 && *str1 != *str2)
	{
		n--;
		str1++;
		str2++;
	}
	if (n > 0 && *str1 != *str2)
		return ((unsigned char)*str1 - (unsigned char)*str2);
	return (0);
}
