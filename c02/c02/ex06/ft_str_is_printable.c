/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:37:44 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/19 16:45:51 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	rtn;
	int	i;

	rtn = 1;
	i = 0;
	while (str[i] != '\0' && rtn != 0)
	{
		if (str[i] < ' ' || str[i] > '~')
			rtn = 0;
		i++;
	}
	return (rtn);
}
