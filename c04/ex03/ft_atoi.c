/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:46:40 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/24 12:45:50 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_chksig(char *str, char **rptr)
{
	int	i;

	i = 0;
	while (*str && (*str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == ' '))
	{
		str++;
	}
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			i++;
		str++;
	}
	*rptr = str;
	if (i % 2 == 0)
		return (1);
	else
		return (-1);
	return (i);
}

int	ft_cntnum(char *str, char **rptr)
{
	char	*ptr;

	while (*str && *str == '0')
		str++;
	if (*str == '\0')
	{
		return (0);
	}
	ptr = str;
	while (*ptr && (*ptr > '0' && *ptr <= '9'))
	{
		ptr++;
	}
	*rptr = str;
	return (ptr - str);
}

int	ft_getstrnum(char *str, int size, int neg)
{
	int	decenas;
	int	rtn;

	rtn = 0;
	decenas = 1;
	while (size > 0)
	{
		rtn += (str[size - 1] - '0') * decenas;
		decenas *= 10;
		size--;
	}
	return (rtn * neg);
}

int	ft_atoi(char *str)
{
	int	neg;

	if (str == 0)
		return (0);
	neg = ft_chksig(str, &str);
	if (*str < '0' || *str > '9')
		return (0);
	return (ft_getstrnum(str, ft_cntnum(str, &str), neg));
}
