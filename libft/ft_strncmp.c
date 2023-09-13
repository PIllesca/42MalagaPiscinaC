/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:07:31 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/13 12:28:58 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

// Función que compara n caracteres de dos cadenas, devuelve 0 si son iguales
// o la diferencia del valor ascii del primer caracter diferente

int	strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		n--;
		s1++;
		s2++;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}
