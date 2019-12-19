/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:05:16 by keulee            #+#    #+#             */
/*   Updated: 2019/12/16 23:07:48 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//
// The memchr() function locates the first occurrence of c (converted to an unsigned char) in string s.
//
// Return
// The memchr() function returns a pointer to the byte located, or NULL if no such byte exists within n bytes.
//
#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	needle;
	unsigned char	*ptr;
	unsigned int	i;

	needle = c;
	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == needle)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
