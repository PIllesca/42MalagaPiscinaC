/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:53:25 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/22 16:48:25 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que devuelve la posición del primer caracter de la cadena

static size_t	ft_firstchar(char const *s1, char const *set)
{
	size_t	i;
	char	*look;

	i = 0;
	while (s1[i])
	{
		look = (char *)set;
		while (*look)
		{
			if (s1[i] == *look)
				break ;
			look++;
		}
		if (*look == 0)
			break ;
		i++;
	}
	return (i);
}

// Función que devuelve la posición del primer caracter de la cadena

static size_t	ft_lastchar(char const *s1, char const *set)
{
	size_t	i;
	char	*look;

	if (ft_strlen(s1) == 0)
		return (0);
	i = ft_strlen(s1) - 1;
	while (i)
	{
		look = (char *)set;
		while (*look)
		{
			if (s1[i] == *look)
				break ;
			look++;
		}
		if (*look == 0)
			break ;
		i--;
	}
	return (i);
}

// Función que elimina todos los caracteres contenidos en set del principio
// y el final del string s1

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	size;

	s1 += ft_firstchar(s1, set);
	size = ft_lastchar(s1, set);
	str = ft_calloc(size + 2, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, size + 2);
	return (str);
}
