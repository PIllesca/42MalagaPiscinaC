/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:50:51 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/26 13:55:13 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char	*str;
	char	c;
	int		n;

	if (argc != 4)
		return (0);
	str = argv[1];
	c = argv[2][0];
	n = atoi(argv[3]);
	printf("Cadena 1: %s\n", str);
	printf("Caracter: %c\n", c);
	printf("n: %d\n", n);
	printf("Probando ft_memset: %s\n", (char *)ft_memset(str, c, n));
	printf("Probando memset: %s\n", (char *)memset(str, c, n));
	return (0);
}
