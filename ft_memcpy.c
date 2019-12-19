/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 15:58:09 by keulee            #+#    #+#             */
/*   Updated: 2019/12/16 21:53:41 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//
//
// The memcpy() function copies n bytes from memory area src to memory area dst.
// If dst and src overlap, behavior is undefined.
// Applications in which dst and src might overlap should use memmove(3) instead.
//
// Return
// The memcpy() function returns the original value of dst.
//
#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char			*s1;
	char			*s2;
	unsigned int	i;

	s1 = (char *)dst;
	s2 = (char *)src;
	i = 0;
	if (n == 0 || src == dst)
		return (s1);
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
