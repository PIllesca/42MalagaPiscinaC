/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:02:38 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/22 16:29:42 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

char	convertir_a_mayusculas(unsigned int indice, char caracter)
{
	return (ft_toupper(caracter));
}

char	convertir_a_minusculas(unsigned int indice, char caracter)
{
	return (ft_tolower(caracter));
}

int	main(int argc, char *argv[])
{
	char	src[50];
	char	*str;

	if (argc != 2)
		return (0);
	strcpy(src, argv[1]);
	printf("Probando ft_strmapi:\n");
	printf("Cadena Original: \"%s\"\n", src);
	str = ft_strmapi(src, convertir_a_mayusculas);
	printf("En mayusculas  \"%s\"\n", str);
	free(str);
	str = ft_strmapi(src, convertir_a_minusculas);
	printf("En mayusculas  \"%s\"\n", str);
	free(str);
	return (0);
}
