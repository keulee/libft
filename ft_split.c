/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 15:24:39 by keulee            #+#    #+#             */
/*   Updated: 2019/12/25 17:37:00 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//
// Description
// Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’
// using the character ’c’ as a delimiter. The array must be ended by a NULL pointer.
//
// Parameters
// #1. The string to be split.
// #2. The delimiter character.
//
// Return
// The array of new strings resulting from the split.
// NULL if the allocation fails.
//
// External functs.
// malloc, free
//
#include "libft.h"
#include <stdlib.h>

int		ft_tab_count(char const *s, char c)
{
	int		i;
	int		count;
	int		tmp;

	i = 0;
	count = 0;
	tmp = 0;
	if (s == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			tmp = 0;
		else if (tmp == 0)
		{
			tmp = 1;
			count++;
		}
		i++;
	}
	return (count);
}

int		ft_tab_len(char const *s, char c, int i)
{
	int		len;

	len = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_tab_free(char const **s, int i)
{
	while (i > 0)
	{
		i--;
		free((void *)s[i]);
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**new;

	i = 0;
	j = 0;
	if (!(new = (char **)malloc(sizeof(char *) * (ft_tab_count(s, c) + 1))))
		return (NULL);
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0' && j < ft_tab_count(s, c))
	{
		while (s[i] == c)
			i++;
		k = 0;
		if (!(new[j] = (char *)malloc(ft_tab_len(s, c, i) + 1)))
			return (ft_tab_free((char const **)new, j));
		while (s[i] != '\0' && s[i] != c)
			new[j][k++] = s[i++];
		new[j][k] = '\0';
		j++;
	}
	new[j] = 0;
	return (new);
}
