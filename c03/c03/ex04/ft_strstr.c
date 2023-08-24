/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:39:40 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/23 12:29:53 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	char	*strg;
	char	*look;

	if (*to_find == '\0')
		return (str);
	if (*str == '\0')
		return (0);
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
			return (str);
		str++;
	}
	return (0);
}
