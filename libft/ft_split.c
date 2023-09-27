/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:29:24 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/26 11:59:33 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que cuenta el número de palabras en una cadena de caracteres
// separadas por un caracter c.

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (i);
}

// Función que devuelve la longitud de una palabra en una cadena de caracteres
// separadas por un caracter c.

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

// Función que devuelve una cadena de caracteres de una palabra en una cadena
// de caracteres separadas por un caracter c.

static char	*ft_getword(char const *s, char c)
{
	char	*str;
	size_t	i;

	str = ft_calloc(ft_wordlen(s, c) + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (*s && *s != c)
	{
		str[i] = *s;
		i++;
		s++;
	}
	return (str);
}

// Función para liberar la memoria si hay un fallo en ft_split

static void	*ft_freeptr(char **ptr, size_t i)
{
	while (i--)
		free(ptr[i]);
	free(ptr);
	return (NULL);
}

// Función que separa una cadena de caracteres en un array terminado en NULL
// de cadenas de caracteres separadas por un caracter c.

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;

	if (!s)
		return (NULL);
	ptr = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			ptr[i] = ft_getword(s, c);
			if (!ptr[i])
				return (ft_freeptr(ptr, i));
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	ptr[i] = NULL;
	return (ptr);
}
