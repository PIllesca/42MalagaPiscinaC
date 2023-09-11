/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:58:33 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/11 12:32:44 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Función que devuelve el tamaño de una cadena, Unsigned long por que size_t
// no esta declarado por defecto.

unsigned long	ft_strlen(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		str++;
	}
	return (str - ptr);
}
