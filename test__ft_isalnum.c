int	ft_isalnum(int c);
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("isalnum
\s:%d\n", ft_isalnum(av[1][0]));
}
