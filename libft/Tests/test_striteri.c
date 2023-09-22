/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:02:38 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/22 16:44:28 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

// Función para imprimir el carácter y su índice
void	print_char_and_index(unsigned int index, char *character)
{
	printf("Índice %u: %c\n", index, *character);
}

int	main(int argc, char *argv[])
{
	char	src[50];
	char	*str;

	if (argc != 2)
		return (0);
	strcpy(src, argv[1]);
	printf("Probando ft_striteri:\n");
	printf("Cadena Original: \"%s\"\n", src);
	ft_striteri(src, print_char_and_index);
	printf("Resultado  \"%s\"\n", str);
	free(str);
	return (0);
}
