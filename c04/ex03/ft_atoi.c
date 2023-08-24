/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:46:40 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/23 13:06:33 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_chksig(char *str)
{
	int	i;

	i = 0;
	while (*str && (*str == ' ' || *str == '+' || *str == '-'))
	{
		if (*str == '-')
			i++;
		str++;
	}
	return (i);
}

int	ft_cntnum(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr && (*ptr >= '0' && *ptr <= '9'))
	{
		ptr++;
	}
	return (ptr - str);
}

int	ft_getstrnum(char *str, int size)
{
	int	decenas;
	int	i;
	int	rtn;

	rtn = 0;
	i = 0;
	decenas = 1;
	while (i < size)
	{
		decenas * 10;
		i++;
	}
	while (size > 0)
	{
		rtn += str[size - 1] * decenas;
		decenas /= 10;
		size--;
	}
	return (rtn);
}

int	ft_atoi(char *str)
{
	int	neg;

	if (str == 0)
		return (0);
	neg = ft_chksig(str);
	if (*str < '0' || *str > '9')
		return (0);
	else
	{
		return (ft_getstrnum(str, ft_cntnum(str)) * (-1 * neg));
	}
}
