/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:41:27 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/26 13:44:13 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char	*str1;
	char	*str2;
	int		n;

	if (argc != 4)
		return (0);
	str1 = argv[1];
	str2 = argv[2];
	n = atoi(argv[3]);
	printf("Cadena 1: %s\n", str1);
	printf("Cadena 2: %s\n", str2);
	printf("n: %d\n", n);
	printf("Probando ft_memcmp: %d\n", ft_memcmp(str1, str2, n));
	printf("Probando memcmp: %d\n", memcmp(str1, str2, n));
	return (0);
}
