/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:24:05 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/26 13:34:14 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	c;
	int		i;

	if (argc != 2)
		return (0);
	i = 0;
	while (argv[1][i] != '\0')
	{
		c = argv[1][i];
		printf("Caracter: \'%c\'\n", c);
		printf("Probando ft_isalpha: %d\n", ft_isalpha(c));
		printf("Probando ft_isdigit: %d\n", ft_isdigit(c));
		printf("Probando ft_isalnum: %d\n", ft_isalnum(c));
		printf("Probando ft_isascii: %d\n", ft_isascii(c));
		printf("Probando ft_isprint: %d\n", ft_isprint(c));
		printf("Probando ft_toupper: %c\n", ft_toupper(c));
		printf("Probando ft_tolower: %c\n", ft_tolower(c));
		i++;
	}
	return (0);
}
