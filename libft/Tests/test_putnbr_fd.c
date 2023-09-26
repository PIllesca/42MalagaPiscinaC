/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:01:43 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/26 14:05:31 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	int		n;
	int		fd;

	if (argc != 3)
		return (0);
	n = atoi(argv[1]);
	fd = atoi(argv[2]);
	printf("Probando ft_putnbr_fd:\n");
	printf("n: %d\n", n);
	printf("fd: %d\n", fd);
	ft_putnbr_fd(n, fd);
	printf("\n");
	return (0);
}
