/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:04:27 by keulee            #+#    #+#             */
/*   Updated: 2019/12/18 12:26:10 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//
// The memmove() function copies len bytes from string src to string dst.
// The two strings may overlap; the copy is always done in a non-destructive manner.
//
// Return
// The memmove() function returns the original value of dst.
//
#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *s1, const void *s2, size_t len)
{
	unsigned char	*dst;
	unsigned char	*src;
	unsigned int	i;

	dst = (unsigned char *)s1;
	src = (unsigned char *)s2;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
	{
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		while (0 < len--)
			dst[len] = src[len];
	}
	return (dst);
}
