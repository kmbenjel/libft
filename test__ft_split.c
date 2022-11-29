#include "libft.h"
#include <stdio.h>
int	main(int ac, char **av)
{
	int	i;
	if (ac == 3)
	{
		i = 0;
		while (ft_split((const char *)av[1], av[2][0])[i])
		{
			printf("%s\n", ft_split((const char *)av[1], av[2][0])[i]);
			i++;
		}
		printf("%s\n", ft_split((const char *)av[1], av[2][0])[i]);
	}
	return (0);
}
