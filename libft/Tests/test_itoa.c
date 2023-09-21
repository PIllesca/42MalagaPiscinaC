/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:48:46 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/21 14:00:34 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>

int	main(int argc, char *argv[])
{
	char	*str;

	printf("Probando ft_itoa:\n");
	if (argc == 2)
	{
		printf("Número: %s\n", argv[1]);
		str = ft_itoa(atoi(argv[1]));
		printf("Resultado: %s\n", str);
		free(str);
	}
	printf("Número: %d\n", 0);
	str = ft_itoa(0);
	printf("Resultado: %s\n", str);
	free(str);
	printf("Número: %d\n", INT_MAX);
	str = ft_itoa(INT_MAX);
	printf("Resultado: %s\n", str);
	free(str);
	printf("Número: %d\n", INT_MIN);
	str = ft_itoa(INT_MIN);
	printf("Resultado: %s\n", str);
	free(str);
	return (0);
}
