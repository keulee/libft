/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 13:45:04 by keulee            #+#    #+#             */
/*   Updated: 2019/12/10 23:35:48 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//
// Description
// The strlcpy() and strlcat() functions copy and concatenate strings with the same input parameters and output result as snprintf(3).
// They are designed to be safer, more consistent, and less error prone replacements for the easily misused functions strncpy(3) and strncat(3).
// strlcpy() and strlcat() take the full size of the destination buffer and guarantee NUL-termination if there is room.
// Note that room for the NUL should be included in dstsize.
//
// strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0.
// If the src and dst strings overlap, the behavior is undefined.
//  
// Return
// The strlcpy() and strlcat() functions return the total length of the string they tried to create.
// For strlcpy() that means the length of src.  
// For strlcat() that means the initial length of dst plus the length of src.
//
#include "libft.h"

size_t	ft_strlcpy(char *restrict dest, const char *restrict src, size_t size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (size == 0)
		return (j);
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
