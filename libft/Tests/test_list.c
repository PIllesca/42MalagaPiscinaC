/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:19:40 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/27 15:55:52 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

// Función para imprimir un entero (utilizada en ft_lstiter)
static void	ft_printf_int(void *data)
{
	int	*ptr;

	ptr = (int *)data;
	printf("%d\n", *ptr);
}

// Función para sumar a un entero (utilizada en ft_lstiter)
static void	*ft_add_int(void *data)
{
	int	*ptr;
	int	*old;

	ptr = malloc(sizeof(int));
	old = (int *)data;
	*ptr = *old + 1;
	return (ptr);
}

// Aquí va tu implementación de la lista

int	main(void)
{
	int		i;
	t_list	*mylist;
	t_list	*newnode;
	int		*data;
	int		size;

	mylist = NULL;
	i = 1;
	while (i < 5)
	{
		data = malloc(sizeof(int));
		*data = i;
		newnode = ft_lstnew(data);
		ft_lstadd_back(&mylist, newnode);
		i++;
	}
	data = malloc(sizeof(int));
	*data = 0;
	newnode = ft_lstnew(data);
	ft_lstadd_front(&mylist, newnode);
	size = ft_lstsize(mylist);
	printf("Tamaño de la lista: %d\n", size);
	printf("Elementos de la lista:\n");
	ft_lstiter(mylist, (void (*)(void *))ft_printf_int);
	newnode = ft_lstlast(mylist);
	printf("Último elemento: ");
	ft_printf_int(newnode->content);
	newnode = ft_lstmap(mylist, ft_add_int, free);
	printf("Elementos de la segunda lista:\n");
	ft_lstiter(newnode, (void (*)(void *))ft_printf_int);
	ft_lstclear(&mylist, free);
	ft_lstclear(&newnode, free);
	return (0);
}
