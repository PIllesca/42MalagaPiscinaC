/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:28:33 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/22 10:41:42 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	k = 0;
	while (src[j] != '\0' && k < (int)nb)
	{
		dest[i] = src[j];
		i++;
		j++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
