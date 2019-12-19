/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:03:21 by keulee            #+#    #+#             */
/*   Updated: 2019/12/16 23:07:05 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//
// The memccpy() function copies bytes from string src to string dst.  
// If the character c (as converted to an unsigned char) occurs in the string src, 
// the copy stops and a pointer to the byte after the copy of c in the string dst is returned.
// Otherwise, n bytes are copied, and a NULL pointer is returned.
//
#include "libft.h"
#include <stdlib.h>

void	*ft_memccpy(void *restrict dest, const void *restrict src, int c,
size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned int	i;
	unsigned char	needle;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	needle = c;
	i = 0;
	if (s1 == s2 || n == 0)
		return (NULL);
	while (i < n)
	{
		s1[i] = s2[i];
		if (s1[i] == needle)
			return (s1 + i + 1);
		i++;
	}
	return (NULL);
}
