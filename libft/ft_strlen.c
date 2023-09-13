/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:58:33 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/13 12:14:47 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

// Función que devuelve el tamaño de una cadena, size_t por que size_t
// no esta declarado por defecto.

size_t	ft_strlen(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		str++;
	}
	return (str - ptr);
}
