/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:58:15 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/20 20:47:51 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_str(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s == c && *(s + 1) != c && *(s + 1) != '\0')
			i++;
		s++;
	}
	return (i);
}

static char	*ft_getnstr(char const *s, char c, size_t *size)
{
	char	*str;
	char	*ptr;

	*size = 0;
	while (s[*size] && s[*size] != c)
		*size += 1;
	str = malloc(sizeof(char) * (*size + 1));
	ptr = str;
	while (*s && *s != c)
	{
		*str = *s;
		str++;
		s++;
	}
	*str = '\0';
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	n;
	size_t	i;
	size_t	tmp;

	n = ft_count_str(s, c);
	if (n == 0)
	{
		ptr = malloc(sizeof(char *));
		*ptr = NULL;
		return (ptr);
	}
	i = 0;
	tmp = 0;
	ptr = malloc(sizeof(char *) * (n + 2));
	if (!ptr)
		return (NULL);
	while (i < n + 1)
	{
		ptr[i] = ft_getnstr(s, c, &tmp);
		s += tmp + 1;
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
