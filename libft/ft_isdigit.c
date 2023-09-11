/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:35:43 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/11 12:30:14 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Función que devuelve distinto de zero si el valor ascii de c es un digito

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
