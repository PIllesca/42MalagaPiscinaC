/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:42:25 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/22 16:50:54 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

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

int	main(void)
{
	char	str[25];

	ft_strcpy(str, "Hola");
	printf("La cadena \"%s\" mide %d\n", str, ft_strlen(str));
	ft_strcpy(str, "Hola mundo");
	printf("La cadena \"%s\" mide %d\n", str, ft_strlen(str));
	ft_strcpy(str, "Hola");
	str[0] = '\0';
	printf("La cadena \"%s\" mide %lu\n", str, strlen(str));
	printf("La cadena \"%s\" mide %d\n", str, ft_strlen(str));
	return (0);
}
