/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:36:27 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/26 13:41:09 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char	*str;
	char	c;
	int		n;

	if (argc != 4)
		return (0);
	str = argv[1];
	c = argv[2][0];
	n = atoi(argv[3]);
	printf("Probando ft_memchr: %s\n", (char *)ft_memchr(str, c, n));
	printf("Probando memchr: %s\n", (char *)memchr(str, c, n));
	return (0);
}
