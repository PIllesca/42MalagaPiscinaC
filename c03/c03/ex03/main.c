/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:42:35 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/22 10:50:29 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

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

#define SIZE 3 

int	main(void)
{
	char	stra[25];
	char	strb[25];
	char	strc[25];

	ft_strcpy(stra, "Un mundo");
	ft_strcpy(strb, " ideal");
	ft_strcpy(strc, stra);
	printf("%s\n", strncat(stra, strb, SIZE));
	printf("%s\n", stra);
	printf("%s\n", ft_strncat(strc, strb, SIZE));
	printf("%s\n", strc);
}
