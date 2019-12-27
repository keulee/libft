/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 13:56:00 by keulee            #+#    #+#             */
/*   Updated: 2019/12/11 09:48:19 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//
// The memset() function writes len bytes of value c (converted to an unsigned char) to the string b.
//
// Return
// The memset() function returns its first argument.
//
#include "libft.h"

void	*ft_memset(void *b, int a, size_t len)
{
	unsigned int		i;
	unsigned char		c;
	char				*ptr2;

	ptr2 = (char *)b;
	i = 0;
	c = a;
	while (i != len)
	{
		ptr2[i] = a;
		i++;
	}
	return (ptr2);
}
