/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:29:03 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/16 13:58:16 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char	haystack[50];
	char	needle[50];
	int		len;

	if (argc != 4)
		return (0);
	strcpy(haystack, argv[1]);
	strcpy(needle, argv[2]);
	len = atoi(argv[3]);
	printf("Comparando ft_strnstr and strnstr:\n");
	printf("Haystack: %s\n", haystack);
	printf("Needle: %s\n", needle);
	printf("Len: %d\n", len);
	printf("%s\n", ft_strnstr(haystack, needle, len));
	printf("%s\n", strnstr(haystack, needle, len));
	return (0);
}
