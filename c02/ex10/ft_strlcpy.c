/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:48:04 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/16 13:52:59 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	s;

	s = 0;
	if (size == 0)
		dest[0] = '\0';
	while (src[s] != '\0')
	{
		if (s < size - 1)
			dest[s] = src[s];
		s++;
	}
	dest[s] = '\0';
	return (s);
}
