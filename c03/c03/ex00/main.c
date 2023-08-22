/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:15:42 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/22 11:48:41 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

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
	char	stra[25];
	char	strb[25];

	ft_strcpy(stra, "Un\nmundo");
	ft_strcpy(strb, "Un mundo");
	printf("Original: %d\n", strcmp(strb, stra));
	printf("Propio: %d\n", ft_strcmp(strb, stra));
}
