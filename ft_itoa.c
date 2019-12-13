#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

int		ft_if_neg(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}

int		ft_int_len(int n)
{
	unsigned long	nb;
	int i;

	nb = 0;
	i = (n < 0 ? 1 : 0);
	if (n == -2147483648)
		nb = 2147483648;
	if (n < 0)
		n = ft_if_neg(n);
	if (n == 0)
		i = 1;
	if (nb == 2147483648)
	{
		while (nb > 0)
		{
			nb = nb / 10;
			i++;
		}
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int i;
	char *str;
	int	mark;

	mark = (n < 0 ? 1 : 0);
	i = ft_int_len(n);
	if(!(str = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	if(n == -2147483648)
		return (strdup("-2147483648"));
	if (n < 0)
	{
		n = ft_if_neg(n);
		str[0] = '-';
	}
	str[i] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[i - 1] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	if (mark == 1)
		str[0] = '-';
	return (str);
}

int		main(void)
{
	printf("%s\n", ft_itoa(INT_MAX));
	return (0);
}
