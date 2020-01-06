/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 16:04:41 by keulee            #+#    #+#             */
/*   Updated: 2020/01/03 23:45:50 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//
// Description
// Iterates the list ’lst’ and applies the function ’f’ to the content of each element.
// Creates a new list resulting of the successive applications of the function ’f’.
// The ’del’ function is used to delete the content of an element if needed.
//
// Parameters
// #1. The adress of a pointer to an element.
// #2. The adress of the function used to iterate on the list.
// #3. The adress of the function used to delete the content of an element if needed.
//
// Return
// The new list. NULL if the allocation fails.
//
// External functs.
// malloc, free
//
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_element;
	t_list *new_list;

	new_list = NULL;
	if ((*f) == NULL || (*del) == NULL)
		return (NULL);
	while (lst != NULL)
	{
		if (!(new_element = ft_lstnew((*f)(lst->content))))
		{
			if (new_element != NULL)
				ft_lstclear(&new_list, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element);
		lst = lst->next;
	}
	return (new_list);
}
