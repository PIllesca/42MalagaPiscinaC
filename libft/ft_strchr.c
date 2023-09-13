/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:55:07 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/13 12:38:28 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

// Funcion que devuelve la primera ocurrencia de un caracter en una cadena
// si no lo encuentra devuelve 0

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return (*s);
		s++;
	}
	if (*s == (char)c)
		return (*s);
	return (NULL);
}
