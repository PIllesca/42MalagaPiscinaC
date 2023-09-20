/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:49:12 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/20 12:23:52 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que reserva memoria para una substring de la cadena de caracteres s
// de tamaño máximo len y devuelve un puntero a la nueva cadena.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s) - start;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (size > len)
		size = len;
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, size + 1);
	return (str);
}
