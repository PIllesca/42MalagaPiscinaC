/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:54:00 by pillesca          #+#    #+#             */
/*   Updated: 2023/10/09 17:12:25 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include "get_next_line.h"

int	main(int argc, char *argv[])
{
	char	*str;
	int		fd;

	if (argc == 1)
		return (0);
	else
		fd = open (argv[1], 0);
	if (fd < 0)
	{
		printf("Error de lectura\n");
		return (1);
	}
	str = get_next_line(fd);
	while (str != NULL)
	{
		printf("%s", str);
		free(str);
		str = get_next_line(fd);
	}
	close(fd);
	return (0);
}
