/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_hex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:55:41 by pillesca          #+#    #+#             */
/*   Updated: 2024/03/27 16:37:13 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	to_upper(unsigned int index, char *c)
{
	int	i;

	i = index;
	i++;
	*c = ft_toupper(*c);
}

void	ft_invstr(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = ft_strlen(str) -1;
	while (i < j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
}

void	ft_inthex(unsigned int num, char *str)
{
	int	temp;
	int	i;

	i = 0;
	while (num != 0)
	{
		temp = num % 16;
		if (temp < 10)
			str[i++] = temp + '0';
		else
			str[i++] = temp -10 + 'a';
		num = num / 16;
	}
	str[i++] = '\0';
	ft_invstr(str);
}

void	ft_sizethex(size_t num, char *str)
{
	size_t	temp;
	size_t	i;

	i = 0;
	while (num != 0)
	{
		temp = num % 16;
		if (temp < 10)
			str[i++] = temp + '0';
		else
			str[i++] = temp -10 + 'a';
		num = num / 16;
	}
	str[i++] = '\0';
	ft_invstr(str);
}
