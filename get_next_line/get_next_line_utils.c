/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:18:09 by pillesca          #+#    #+#             */
/*   Updated: 2023/10/02 13:35:22 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// Función que devuelve la longitud de una cadena

size_t	ft_strlen(const char *str)
{
	const char	*ptr;

	ptr = str;
	while (*str)
		str++;
	return (str - ptr);
}

// Función que reserva memoria para un array de n elementos de tamaño size y
// rellena el array con 0 en cada byte

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	count *= size;
	while (count--)
		((char *)ptr)[count] = 0;
	return (ptr);
}

// Función que devuelve un puntero a la primera ocurrencia del carácter c en la
// cadena s

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	if (*str == (char)c)
		return (str);
	return (NULL);
}

// Función que concatena dos cadenas

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;
	size_t	i;
	size_t	j;

	size = ft_strlen(s1) + ft_strlen(s2);
	str = ft_calloc(size + 1, sizeof(char));
	if (!str || !s1 || !s2)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && i < size - 1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0' && i < size)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	if (i < size)
		str[size] = '\0';
	return (str);
}
