/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:33:09 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/22 18:24:02 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;
	int				rtn;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s1[i] == s2[j] && i < n - 1 && j < n - 1)
	{
		i++;
		j++;
	}
	if (n == 0)
		rtn = 0;
	else
		rtn = s1[i] - s2[j];
	return (rtn);
}
