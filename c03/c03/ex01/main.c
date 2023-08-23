/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:15:42 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/22 18:25:04 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#define SIZE 8

int	main(void)
{
	char	stra[25];
	char	strb[25];

	ft_strcpy(stra, "Un mundo");
	ft_strcpy(strb, "Un mundi");
	printf("Original: %d\n", strncmp(strb, stra, SIZE));
	printf("Propio: %d\n", ft_strncmp(strb, stra, SIZE));
	printf("Original: %d\n", strncmp(strb, stra, SIZE - 1));
	printf("Propio: %d\n", ft_strncmp(strb, stra, SIZE - 1));
}
