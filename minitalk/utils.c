/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:42:58 by pillesca          #+#    #+#             */
/*   Updated: 2024/10/02 18:07:28 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/**
 * Función que envia la cadena s al file descriptor 1
 * 
 * @param[in] s Cadena a imprimir
 */
void	ft_putstr(char *s)
{
	while (*s)
	{
		write(1, s++, 1);
	}
}

/**
 * Función que imprime un número entero
 * 
 * @param[in] n Número entero a imprimir
 */
void	ft_putnbr(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	write(1, &"0123456789"[n % 10], 1);
}

/**
 * Función que convierte una cadena de caracteres en un entero
 * 
 * @param[in] str Cadena de caracteres a convertir
 */
int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] < '0' || str[i] > '9' || str[i] == '\0')
		return (0);
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

/**
 * Función que imprime un mensaje de error y sale del programa
 * 
 * @param[in] s Mensaje de error
 */
void	ft_error_exit(char *s)
{
	ft_putstr(s);
	exit(EXIT_FAILURE);
}
