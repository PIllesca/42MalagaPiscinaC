/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:02:49 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/26 13:07:51 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Probando ft_atoi:\n");
		printf("Entrada: \"%s\"\n", argv[1]);
		printf("atoi: %d\n", atoi(argv[1]));
		printf("ft_atoi: %d\n", ft_atoi(argv[1]));
	}
	return (0);
}
