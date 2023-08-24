/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:53:05 by pillesca          #+#    #+#             */
/*   Updated: 2023/08/22 16:56:53 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putstr(char *str);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	str[25];

	ft_strcpy(str, "Hola\nMundo");
	ft_putstr(str);
}
