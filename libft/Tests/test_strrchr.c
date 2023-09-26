/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:24:22 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/26 14:24:46 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char	*str;
	char	c;

	if (argc != 3)
		return (0);
	str = argv[1];
	c = argv[2][0];
	printf("Probando ft_strrchr:\n");
	printf("Cadena: %s\n", str);
	printf("Caracter: %c\n", c);
	printf("Ultima ocurrencia: %s\n", ft_strrchr(str, c));
	printf("\n");
	return (0);
}
