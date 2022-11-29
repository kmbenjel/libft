#include "libft.h"
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 3)
		printf("=> %s\n", ft_strjoin(av[1], av[2]));
	return (0);
}
