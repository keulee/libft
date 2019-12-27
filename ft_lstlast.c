/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 21:49:21 by keulee            #+#    #+#             */
/*   Updated: 2019/12/26 17:44:31 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//
// Description
// Returns the last element of the list.
// 
// Parameters
// #1. The beginning of the list.
//
// Return
// Last element of the list.
//
#include "libft.h"

t_list		*ft_lstlast(t_list *lst)
{
	int count;

	count = ft_lstsize(lst);
	while (count - 1 > 0)
	{
		lst = lst->next;
		count--;
	}
	return (lst);
}