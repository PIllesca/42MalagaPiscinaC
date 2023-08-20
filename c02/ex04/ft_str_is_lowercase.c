/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:24:22 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/19 16:43:06 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	rtn;
	int	i;

	rtn = 1;
	i = 0;
	while (str[i] != '\0' && rtn != 0)
	{
		if (str[i] < 'a' || str[i] > 'z')
			rtn = 0;
		i++;
	}
	return (rtn);
}
