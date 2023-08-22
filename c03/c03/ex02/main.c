/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:50:44 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/22 11:55:40 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

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

#define SIZE 12

int	main(void)
{
	char	str1[25];
	char	str2[25];
	char	str3[25];

	ft_strcpy(str1, "Un mundo");
	ft_strcpy(str2, " ideal");
	ft_strcpy(str3, str1);
	printf("Original %s %s\n", strcat(str1, str2), str1);
	printf("Propio %s %s\n", ft_strcat(str3, str2), str3);
}
