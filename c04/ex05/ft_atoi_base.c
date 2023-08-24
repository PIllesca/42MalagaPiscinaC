/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:01:38 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/24 19:12:56 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_chkbase(char *base)
{
	int	i;
	int	j;
	int	size;

	if (base == 0)
		return (-1);
	size = 0;
	while (base[size] != '\0')
		size++;
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-'
				|| base[i] <= ' ')
				return (-1);
			j++;
		}
		i++;
	}
	return (size);
}

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

int	ft_cmpbase(char c, char *base)
{
	int	rtn;
	int	i;

	rtn = -1;
	i = 0;
	while (*base)
	{
		if (*base == c)
			rtn = i;
		base++;
		i++;
	}
	return (rtn);
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
	while (*ptr && (ft_cmpbase(*ptr, base) >= 0))
	{
		ptr++;
	}
	*rptr = str;
	return (ptr - str);
}

int	ft_getstrnum(char *str, char *base, int mult, int size, int neg)
{
	int	decenas;
	int	rtn;

	rtn = 0;
	decenas = 1;
	while (size > 0)
	{
		rtn += ft_cmpbase((str[size - 1]), base) * decenas;
		decenas *= mult;
		size--;
	}
	return (rtn * neg);
}

int	ft_atoi_base(char *str, char *base)
{
	int	size;
	int	neg;

	if (str == 0)
		return (0);
	size = ft_chkbase(base);
	if (size < 2)
		return (0);
	neg = ft_chksig(str, &str);
	if (ft_cmpbase(*str, base) < 0)
	{
		return (0);
	}
	return (ft_getstrnum(str, base, size, ft_cntnum(str, base, &str), neg));
}
