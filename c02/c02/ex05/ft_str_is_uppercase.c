/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:27:56 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/19 16:44:39 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	rtn;
	int	i;

	rtn = 1;
	i = 0;
	while (str[i] != '\0' && rtn != 0)
	{
		if (str[i] < 'A' || str[i] > 'Z')
			rtn = 0;
		i++;
	}
	return (rtn);
}
