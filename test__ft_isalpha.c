#include "ft_isalpha.c"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("isalpha
\s:% d\n ", ft_isalpha(av[1][0]));
}
