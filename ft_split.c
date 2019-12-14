#include <stdlib.h>

int		ft_tab_count(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count + 1);
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
		free((void *)s);
		i--;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		l;
	char	**new;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if (!(new = (char **)malloc(sizeof(char *) * (ft_tab_count(s, c) + 1))))
		return (NULL);
	while (s[i] != '\0' && j < ft_tab_count(s, c))
	{
		while(s[i] == c)
			i++;
		l = 0;
		if(!(new[j] = (char *)malloc(sizeof(char) * ft_tab_len(s, c, i) + 1)))
			return (ft_tab_free((char const **)new, j));
		while (s[i] != '\0' && s[i] != c)
			new[j][l++] = s[i++];
		new[j][l] = '\0';
		j++;
	}
	new[j] = '\0';
	return (new);
}
