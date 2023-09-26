/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:06:18 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/26 14:09:12 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char	*str;
	char	*ptr;
	char	c;

	if (argc != 3)
		return (0);
	str = argv[1];
	c = argv[2][0];
	printf("Probando ft_strchr:\n");
	printf("Cadena: %s\n", str);
	printf("Caracter: %c\n", c);
	ptr = ft_strchr(str, c);
	printf("Resultado: %s\n", ptr);
	printf("\n");
	return (0);
}
