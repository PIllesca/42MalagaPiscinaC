/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:01:06 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/22 11:44:04 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dstlen;
	unsigned int	srclen;
	unsigned int	rtn;

	dstlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size == 0)
		rtn = srclen;
	else if (dstlen >= size)
	{
		rtn = size + srclen;
	}
	else
	{
		ft_strncpy(dest + dstlen, src, size - dstlen - 1);
		dest[size - 1] = '\0';
		rtn = dstlen + srclen;
	}
	return (rtn);
}
