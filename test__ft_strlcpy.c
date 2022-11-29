#include "ft_strlcpy.c"
#include "ft_strlen.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
int	main(int ac, char **av)
{
	char	*dest;
	char	*src;
	size_t	a;
	size_t	b;

	dest = av[1];
	src = av[2];
	if (ac == 4)
	{
		printf("strlcpy:\n");
		a = strlcpy(dest, src, atoi(av[3]));
		printf("%s - %zu\n", dest, a);
		dest = av[1];
		printf("ft_strlcpy:\n");
		b = ft_strlcpy(dest, src, atoi(av[3]));
		printf("%s - %zu\n", dest, b);
	}
	return (0);
}
