#include "ft_strlen.c"
#include "ft_strrchr.c"
#include "libft.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%s", ft_strrchr(av[1], av[2][0]));
	return (0);
}
