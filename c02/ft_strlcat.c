/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:24:07 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/16 13:43:26 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	int				i;

	s = 0;
	if (size == 0)
		dest[0] = '\0';
	while (dest[s] != '\0' && s < size)
		s++;
	i = 0;
	while (src[i] != '\0' && s < size - 1)
	{
		dest[s] = src[i];
		s++;
		i++;
	}
	dest[s] = '\0';
	return (s);
}
