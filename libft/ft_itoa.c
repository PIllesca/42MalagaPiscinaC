/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:21:01 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/21 13:46:48 by pillesca         ###   ########.fr       */
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

// Función que recibe un número entero, reserva memoria para un string y 
// devuelve el string con el número entero pasado como parámetro

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = ft_intlen(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	str = ft_getnumstr(str, n, len);
	return (str);
}
