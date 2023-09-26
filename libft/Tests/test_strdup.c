/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:09:40 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/26 14:12:27 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char	*str;
	char	*str2;

	if (argc != 2)
		return (0);
	str = argv[1];
	printf("Probando ft_strdup:\n");
	printf("Cadena: %s\n", str);
	str2 = ft_strdup(str);
	printf("Cadena duplicada: %s\n", str2);
	printf("\n");
	return (0);
}
