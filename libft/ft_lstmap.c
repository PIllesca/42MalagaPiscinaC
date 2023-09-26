/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:01:06 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/26 12:44:55 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que crea una nueva lista resultado de aplicar la función f a el
// contenido de cada nodo de la lista lst. data es el contenido de cada nodo,
// añadido para poder liberar la memoria en caso de error.

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*ptr;
	void	*data;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		data = f(lst->content);
		ptr = ft_lstnew(data);
		if (!ptr)
		{
			ft_lstclear(&new, del);
			free(data);
			return (NULL);
		}
		ft_lstadd_back(&new, ptr);
		lst = lst->next;
	}
	return (new);
}
