/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putendl_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:56:01 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/26 14:00:53 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char	*str;
	int		fd;

	if (argc != 3)
		return (0);
	str = argv[1];
	fd = atoi(argv[2]);
	printf("Probando ft_putendl_fd:\n");
	printf("Cadena: %s\n", str);
	printf("fd: %d\n", fd);
	ft_putendl_fd(str, fd);
	printf("\n");
	return (0);
}
