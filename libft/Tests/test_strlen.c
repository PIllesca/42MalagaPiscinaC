/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:21:24 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/26 14:22:08 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char	*str;

	if (argc != 2)
		return (0);
	str = argv[1];
	printf("Probando ft_strlen:\n");
	printf("Cadena: %s\n", str);
	printf("Longitud: %zu\n", ft_strlen(str));
	printf("\n");
	return (0);
}
