/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:53:47 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/16 12:13:52 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Funcion que convierte un caracter en minuscula si es mayuscula,
// si no devuelve el caracter como tal

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
		return (c);
}
