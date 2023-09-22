/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:52:37 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/22 17:07:39 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que envia el caracter c al file descriptor fd.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
