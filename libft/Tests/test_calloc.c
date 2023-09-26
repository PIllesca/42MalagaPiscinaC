/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:17:37 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/26 13:21:54 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		len;
	char	*str;

	if (argc != 2)
		return (0);
	len = atoi(argv[1]);
	str = ft_calloc(len, sizeof(char));
	i = 0;
	printf("Probando ft_calloc:\n");
	printf("Cadena en valor Ascii: ");
	while (i < len)
	{
		printf("%d ", str[i]);
		i++;
	}
	printf("\n");
	free(str);
	return (0);
}
