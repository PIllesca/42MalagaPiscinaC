/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:18:09 by pillesca          #+#    #+#             */
/*   Updated: 2023/10/01 16:11:27 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	const char	*ptr;

	ptr = str;
	while (*str)
		str++;
	return (str - ptr);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = s;
	while (n > 0)
	{
		*str = 0;
		str++;
		n--;
	}
	return ;
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

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
