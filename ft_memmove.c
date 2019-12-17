#include <stdlib.h>

void	*ft_memmove(void *s1, const void *s2, size_t len)
{
	unsigned char	*dst;
	unsigned char	*src;
	unsigned int	i;

	dst = (unsigned char *)s1;
	src = (unsigned char *)s2;
	i = 0;
	if (dst == NULL || src == NULL)
		return (NULL);
	if (dst < src || dst + len < src) // overlap

	if (dst > src) // no overlap
	{
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (s1);
}
