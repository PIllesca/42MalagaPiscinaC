/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:56:16 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/22 17:00:25 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(int argc, char *argv[])
{
	size_t	i;

	if (argc != 2)
		return (0);
	i = 0;
	while (i < ft_strlen(argv[1]))
	{
		ft_putchar_fd(argv[1][i], 1);
		i++;
	}
	return (0);
}
