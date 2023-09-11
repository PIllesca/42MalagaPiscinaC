/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:18:11 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/11 12:35:00 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Función que escribre len bytes de la cadena b con el valor recibido en c
// convertido a Unsigned char

void	*ft_memset(void *b, int c, unsigned long len)
{
	char	*ptr;

	ptr = b;
	while (len > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		len--;
	}
	return (b);
}
