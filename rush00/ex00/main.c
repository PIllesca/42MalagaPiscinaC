/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 12:57:18 by vnaslund          #+#    #+#             */
/*   Updated: 2023/08/13 17:55:13 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);
void	rush(int x, int y);

int	main(void)
{
	rush(5, 3);
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(4, 4);
	ft_putchar('\n');
	rush(2, 2);
	ft_putchar('\n');
	rush(-32, 0);
	ft_putchar('\n');
	rush (123, 42);
	return (0);
}
