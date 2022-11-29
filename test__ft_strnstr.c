#include "ft_strnstr.c" #include < stdio.h>
#include < stdlib.h>
int	main(int ac, char **av)
{
	char	*h;
	char	*n;
	int		l;
	if (ac == 4)
	{
		h = av[1];
		n = av[2];
		l = atoi(av[3]);
		printf("Result
\s:%s",
				ft_strnstr(h, n, l));
	}
}
