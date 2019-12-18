#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int						mark;
	int 					i;
	unsigned long int		final_nbr;

	i = 0;
	mark = 1;
	final_nbr = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == '\t')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			mark = mark * -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		final_nbr = final_nbr * 10 + str[i] - '0';
		i++;
		if (final_nbr > 2147483648 && mark == 1)
			return (-1);
		if (final_nbr > 2147483648 && mark == -1)
			return (0);
	}
	return (final_nbr * mark);
}
