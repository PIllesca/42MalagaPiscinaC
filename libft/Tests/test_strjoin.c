/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:29:03 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/20 12:50:53 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char	s1[50];
	char	s2[50];

	if (argc != 3)
		return (0);
	strcpy(s1, argv[1]);
	strcpy(s2, argv[2]);
	printf("Probando strjoin:\n");
	printf("Cadena 1: \"%s\"\n", s1);
	printf("Cadena 2: \"%s\"\n", s2);
	printf("Resultado: \"%s\"\n", ft_strjoin(s1, s2));
	return (0);
}
