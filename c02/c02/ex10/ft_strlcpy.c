/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:48:04 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/21 15:20:52 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	s;

	s = 0;
	if (size == 0)
		dest[0] = '\0';
	while (src[s] != '\0' && s < size - 2)
	{
		dest[s] = src[s];
		s++;
	}
	dest[s] = '\0';
	dest[size - 1] = '\0';
	return (s);
}
