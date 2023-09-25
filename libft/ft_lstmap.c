/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:01:06 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/25 13:50:27 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que crea una nueva lista resultado de aplicar la función f a el
// contenido de cada nodo de la lista lst.

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*old;
	t_list	*new;
	t_list	*ptr;

	if (!lst || !f || !del)
		return (NULL);
	old = lst;
	new = NULL;
	while (old)
	{
		ptr = ft_lstnew(f(old->content));
		if (!ptr)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, ptr);
		old = old->next;
	}
	return (new);
}
