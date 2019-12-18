/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 13:59:11 by keulee            #+#    #+#             */
/*   Updated: 2019/12/18 14:16:30 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//
//
// The bzero() function writes n zeroed bytes to the string s. If n is zero, bzero() does nothing.
//
//
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	unsigned int	i;

	i = 0;
	ptr = (unsigned char *)s;
	if (n == 0)
		return ;
	while (i != n)
	{
		ptr[i] = 0;
		i++;
	}
}
