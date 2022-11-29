#include <stdio.h>
#include <stdlib.h>
char	*ft_substr(char *s, unsigned int start, size_t len);
int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("%s", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
	}
}
