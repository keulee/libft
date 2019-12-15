#include <stdlib.h>

char *ft_strchr(const char *s, int c)
{
	char	needle;
	char	*str;
	int		i;

	i = 0;
	needle = c;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == needle)
			return (&str[i]);
		i++;
	}
	if(str[i] == '\0' && c == '\0')
		return (&str[i]);
	return (NULL);
}
