/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:54:01 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/11 12:31:21 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Función que devuelve distinto de zero si el valor ascii de c es imprimible

int	ft_isprint(int c)
{
	if (c < ' ' || c > '~')
		return (0);
	else
		return (1);
}
