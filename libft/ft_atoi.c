/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:17:16 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/13 13:38:06 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Función auxiliar que devuelve -1 si el primer caracter no vacío es '-'
// o 1 en caso contrario

static int	ft_chk_sign(const char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign *= -1;
	return (sign);
}

// Función que convierte una cadena de caracteres en un entero
// ignora los espacios iniciales.

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	nb;

	i = 0;
	sign = ft_chk_sign(str);
	nb = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
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
