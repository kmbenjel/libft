#include "ft_itoa.c"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	n;

	if (ac == 2)
	{
		n = atoi(av[1]);
		printf("%s\n", ft_itoa(n));
	}
	return (0);
}
