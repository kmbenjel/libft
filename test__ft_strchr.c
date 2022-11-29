#include "ft_strchr.c"
#include "libft.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%s\n", ft_strchr(av[1], av[2][0]));
	return (0);
}
