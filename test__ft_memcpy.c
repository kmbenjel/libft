#include "ft_memcpy.c"
#include "libft.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[1][0] == 'm')
			printf("%s", memcpy(av[1], av[2], 0));
		else
			printf("%s", ft_memcpy(av[1], av[2], 0));
	}
	return (0);
}
