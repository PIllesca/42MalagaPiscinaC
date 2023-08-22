/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:51:13 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/22 10:57:36 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

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
	char	stra[25];
	char	strb[25];
	char	strc[25];

	ft_strcpy(stra, "Un mundo");
	ft_strcpy(strb, "m");
	ft_strcpy(strc, stra);
	printf("Encontrado %s original %s\n", strstr(stra, strb), stra);
	printf("Encontrado %s original %s\n", ft_strstr(strc, strb), strc);
	return (0);
}
