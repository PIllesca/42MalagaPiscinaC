/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:04:21 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/16 13:18:37 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_ch_cmpr(char c)
{
	int	i;

	i = 0;
	if (c >= 'a' && c <= 'z')
		i = 1;
	else if (c >= 'A' && c <= 'Z')
		i = 2;
	else if (c >= '0' && c <= '9')
		i = 3;
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && ft_ch_cmpr(str[0]) == 1)
			str[i] -= 'a' - 'A';
		else
		{
			if (ft_ch_cmpr(str[i - 1]) == 0 && ft_ch_cmpr(str[i]) == 1)
				str[i] -= 'a' - 'A';
		}
		i++;
	}
	return (str);
}
