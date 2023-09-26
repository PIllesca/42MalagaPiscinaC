/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:44:50 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/26 13:48:00 by pillesca         ###   ########.fr       */
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
	printf("Probando ft_memcpy: %s\n", (char *)ft_memcpy(str1, str2, n));
	printf("Probando memcpy: %s\n", (char *)memcpy(str1, str2, n));
	return (0);
}
