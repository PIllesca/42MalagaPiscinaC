/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:50:12 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/13 11:52:36 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Funcion que convierte un caracter en mayuscula si es minuscula,
// si no devuelve el caracter como tal

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else
		return (c);
}
