/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:17:29 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/22 11:27:50 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

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

#define SIZE 5

int	main(void)
{
	char	str1[50];
	char	str2[10];

	ft_strcpy(str1, "Un mundo");
	ft_strcpy(str2, " ideal");
	printf("Original = %lu\n", strlcat(str1, str2, SIZE));
	printf("Nueva cadena = %s\n", str1);
	ft_strcpy(str1, "Un mundo");
	printf("Propio = %u\n", ft_strlcat(str1, str2, SIZE));
	printf("Nueva cadena = %s\n", str1);
}
