/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:08:25 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/26 13:16:49 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		len;
	int		size;
	int		i;

	if (argc == 3)
	{
		str = strdup(argv[1]);
		len = atoi(argv[2]);
		size = strlen(str);
		printf("Probando ft_bzero:\n");
		printf("Cadena Original: \"%s\"\n", str);
		printf("Longitud: %d\n", len);
		ft_bzero(str, len);
		printf("Cadena en valor Ascii: ");
		i = 0;
		while (i < size)
		{
			printf("%d ", str[i]);
			i++;
		}
		printf("\n");
		free(str);
	}
	return (0);
}
