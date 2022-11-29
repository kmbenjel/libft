#include "ft_atoi.c"
#include "ft_isdigit.c"
#include "libft.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("atoi: %d", ft_atoi(av[1]));
	return (0);
}
