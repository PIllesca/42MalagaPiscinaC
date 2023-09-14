/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:50:59 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/14 13:58:02 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que reserva memoria para una copia de la cadena de caracteres s1
// copia s1 en la memoria reservada y devuelve un puntero a la nueva cadena.

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s1);
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, size);
	return (str);
}
