#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char			*copy;
	unsigned int	i;

	i = 0;
	if (!(copy = (char *)malloc(size * count)))
		return (NULL);
	while (i < count)
	{
		copy[i] = 0;
		i++;
	}
	return (copy);
}
