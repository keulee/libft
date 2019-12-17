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

// 문제를 제대로 이해 못해서 코드를 잘못 짬... 
// unsigned int start에서 start는 unsigned char나 char로 cast할 아스키가 아니라 스트링 s에서 index를 이야기 하는 것임.
// <각 파라미터 설명>
// #1. The string from which to create the substring.
// #2. The start index of the substring in the string ’s’.
// #3. The maximum length of the substring.
