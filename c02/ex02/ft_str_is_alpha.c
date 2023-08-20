/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:52:31 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/19 16:39:33 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	rtn;
	int	i;

	rtn = 1;
	i = 0;
	while (str[i] != '\0' && rtn != 0)
	{
		if (str[i] < 'A' || str[i] > 'z' || (str[i] > 'Z' && str[i] < 'a'))
			rtn = 0;
		i++;
	}
	return (rtn);
}
