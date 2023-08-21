/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:33:09 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/21 16:36:25 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 1;
	while (s1[i] != '\0' && s1[i] == s2[j] && k < n)
	{
		i++;
		j++;
		k++;
	}
	return (s1[i] - s2[i]);
}
