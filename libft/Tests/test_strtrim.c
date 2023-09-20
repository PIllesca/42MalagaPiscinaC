/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:29:03 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/20 13:14:30 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char	src[50];
	char	set[50];

	if (argc != 3)
		return (0);
	strcpy(src, argv[1]);
	strcpy(set, argv[2]);
	printf("Probando ft_strtrim:\n");
	printf("Cadena Original: \"%s\"\n", src);
	printf("Set a borrar: \"%s\"\n", set);
	printf("Resultado: \"%s\"\n", ft_strtrim(src, set));
	return (0);
}
