/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:19:08 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/26 14:21:04 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char	dst[100];
	char	*src;
	size_t	dstsize;

	if (argc != 4)
		return (0);
	src = argv[1];
	dstsize = atoi(argv[2]);
	strcpy(dst, argv[3]);
	printf("Probando ft_strlcpy:\n");
	printf("Cadena: %s\n", src);
	printf("Cadena destino: %s\n", dst);
	printf("Tamaño maximo de la cadena destino: %zu\n", dstsize);
	printf("Longitud de la cadena destino: %zu\n", strlen(dst));
	printf("Longitud copiada: %zu\n", ft_strlcpy(dst, src, dstsize));
	printf("Cadena destino despues de copiar: %s\n", dst);
	printf("\n");
	return (0);
}
