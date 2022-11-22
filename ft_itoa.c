#include <stdlib.h>

int static ft_count_target(int n)
{
	int i;

	i = 1;
	if (n < 0)
		i++;
	while (n && i++)
		n /= 10;
	return (i);
}

char *ft_itoa(int n)
{
	char *str;
	unsigned int target;
	unsigned int i;

	target = ft_count_target(n);
	str = malloc(ft_count_target(n));

	if (n < 0) {
		*str = '-';
		n *= -1;
	}
	str[target - 1] = 0;
	str += target - 1;
	i = target - 1;
	while (n)
	{
		i--;
		str--;
		*str = n % 10 + '0';
		n /= 10;
	}
	if (i == 1)
		str--;
	return str;
}
