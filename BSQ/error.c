/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:47:10 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/30 13:47:12 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	chk_char(char *buffer, char *c)
{
	int	i;

	i = 0;
	while (buffer[i] >= '0' && buffer[i] <= '9' && buffer[i + 3] != '\n')
		i++;
	i += 4;
	if (c[0] == c[1] || c[0] == c[1] || c[2] == c[1] || c[0] < ' ' || c[0] > '~'
		|| c[1] < ' ' || c[1] > '~' || c[2] < ' ' || c[2] > '~'
		|| buffer[i - 1] != '\n')
	{
		write (1, "map error\n", 10);
		exit (1);
	}
	return (i);
}

void	chk_map(char *buffer, int *xy, char *c, int size)
{
	int		i;
	int		cl;

	i = chk_char(buffer, c);
	cl = xy[0];
	while (i < size)
	{
		if (buffer[i] != c[0] && buffer[i] != c[1] && buffer[i] != '\n')
		{
			write (1, "map error\n", 10);
			exit (1);
		}
		if (buffer[i] == '\n')
		{
			if (cl <= xy[0])
			{
				write (1, "map error\n", 10);
				exit (1);
			}
			else
				cl = 0;
		}
		i++;
		cl++;
	}
}
