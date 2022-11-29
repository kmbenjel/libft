#include "ft_memcpy.c"
#include "ft_memmove.c"
#include "ft_memset.c"
#include "ft_strlen.c"
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
			printf("Real: %s\n", memmove(av[1], av[2], atoi(av[3])));
		else
			printf("Mine: %s\n", ft_memmove(av[1], av[2], atoi(av[3])));
	}
	return (0);
}
