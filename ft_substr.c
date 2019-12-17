#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*copy;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	copy = NULL;
	if (!(copy = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		while (0 < len)
		{
			copy[j++] = s[start++];
			len--;
		}
		i++;
	}
	copy[j] = '\0';
	return (copy);
}
