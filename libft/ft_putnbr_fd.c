/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:15:50 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/25 12:31:26 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que devuelve la longitud de un número entero

static size_t	ft_intlen(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	if (i == 0)
		i++;
	return (i);
}

// Función que devuelve un string con el número entero pasado como parámetro

static char	*ft_getnumstr(char *str, int n, size_t len)
{
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	while (n)
	{
		if (n < 0)
			str[len - 1] = '0' - (n % 10);
		else
			str[len - 1] = '0' + (n % 10);
		len--;
		n /= 10;
	}
	return (str);
}

// Función que recibe un número entero y un file descriptor y escribe el número
// entero en el file descriptor pasado como parámetro. Reconstruido por que
// usando ft_itoa me daba un error con paco.

void	ft_putnbr_fd(int n, int fd)
{
	char	str[12];

	ft_getnumstr(str, n, ft_intlen(n));
	str[ft_intlen(n)] = '\0';
	ft_putstr_fd(str, fd);
}
