/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:22:35 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/26 14:23:58 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char	*s1;
	char	*s2;
	size_t	n;

	if (argc != 4)
		return (0);
	s1 = argv[1];
	s2 = argv[2];
	n = atoi(argv[3]);
	printf("Probando ft_strncmp:\n");
	printf("Cadena 1: %s\n", s1);
	printf("Cadena 2: %s\n", s2);
	printf("Numero de caracteres a comparar: %zu\n", n);
	printf("Resultado: %d\n", ft_strncmp(s1, s2, n));
	printf("\n");
	return (0);
}
