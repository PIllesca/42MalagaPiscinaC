/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:47:58 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/11 12:29:13 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Función que devuelve distinto de 0 si c es un valor ascii válido

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
