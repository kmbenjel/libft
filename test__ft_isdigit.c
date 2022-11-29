#include "ft_isdigit.c"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("isdigit
\s:%d\n", ft_isdigit(av[1][0]));
}
