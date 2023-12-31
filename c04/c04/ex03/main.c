/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:06:58 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/30 19:07:00 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	printf("%d\n", ft_atoi(" ---+  --+12345678901234567890"));
	printf("%d\n", ft_atoi(" ---+--+123456+78901234567890"));
	printf("%d\n", ft_atoi(" ---+12345678901234567890"));
	printf("%d\n", ft_atoi(" -    --+--+12345678901234567890"));
	printf("%d\n", ft_atoi(" ---+\n--+12345678901234567890"));
	printf("%d\n", ft_atoi(" ---+--+00"));
	printf("%d\n", ft_atoi("0"));
	return (0);
}
