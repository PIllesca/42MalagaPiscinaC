/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:39:40 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/21 18:56:52 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	char	*ret;
	char	*strg;
	char	*look;

	ret = NULL;
	while (*str)
	{
		strg = str;
		look = to_find;
		while (*strg == *look && *strg && *look)
		{
			strg++;
			look++;
		}
		if (*look == '\0')
			ret = str;
		str++;
	}
	return (ret);
}
