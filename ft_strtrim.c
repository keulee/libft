#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_check_set(char const *s1, char c)
{
	int		i;
	char	*set;

	i = 0;
	set = (char *)s1;
	while (set[i] != '\0')
	{
		if(set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	j = ft_strlen(s1);
	if (s1 == NULL)
		return (NULL);
	while (s1[i] != '\0' && ft_check_set(set, s1[i] == 1))
		i++;
	while (ft_check_set(set, s1[j] == 1 && j > i))
		j--;
	return (ft_substr(s1, i, j - i + 1));
}

int		main(void)
{
	char *s1 = "\t \n\n \t\t \n\n\nHello \t  Please\n Trim me !\n  \n \n \t\t\n";

	printf("%s\n", ft_strtrim(s1, " \n\t"));
	return (0);
}
