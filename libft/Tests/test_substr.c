/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:29:03 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/20 12:33:18 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char	src[50];
	int		len;
	int		start;

	if (argc != 4)
		return (0);
	strcpy(src, argv[1]);
	start = atoi(argv[2]);
	len = atoi(argv[3]);
	printf("Probando ft_substr:\n");
	printf("Cadena Original: %s\n", src);
	printf("Tamaño máximo: %d\n", len);
	printf("Posición de inicio: %d\n", start);
	printf("Resultado: %s\n", ft_substr(src, start, len));
	return (0);
}
