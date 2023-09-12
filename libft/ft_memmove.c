/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:19:56 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/12 13:21:10 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Función que copia n bytes de la cadena src a dst y devuelve un puntero a dst.

void	*ft_memmove(void *dst, const void *src, unsigned long len)
{
	char	*ptr;
	char	*str;

	ptr = dst;
	str = src;
	if (ptr < str)
	{
		while (len > 0)
		{
			*ptr = *str;
			ptr++;
			str++;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			ptr[len - 1] = str[len - 1];
			len--;
		}
	}
	return (dst);
}
