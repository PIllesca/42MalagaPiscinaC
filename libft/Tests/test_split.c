/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:08:26 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/21 12:15:01 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char	src[50];
	char	c;
	char	**ptr;
	int		i;

	if (argc != 3)
		return (0);
	strcpy(src, argv[1]);
	c = argv[2][0];
	printf("Probando ft_split:\n");
	printf("Cadena Original: \"%s\"\n", src);
	printf("Caracter separador: \"%c\"\n", c);
	ptr = ft_split(src, c);
	i = 0;
	while (ptr[i] != NULL)
	{
		printf("Cadena %d: \"%s\"\n", i, ptr[i]);
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}
