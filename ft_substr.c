#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*copy;
	unsigned char	needle;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	copy = NULL;
	needle = start;
	if (!(copy = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i] != '\0' &&)
	{
		if (s[i] == needle)
		{
			while (s[i] != '\0' && 0 < len)
			{
				copy[j++] = s[i++];
				len--;
			}
		}
		i++;
	}
	copy[j] = '\0';
	return (copy);
}
