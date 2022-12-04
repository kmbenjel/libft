#include "ft_itoa.c"
#include "ft_putchar_fd.c"
#include "ft_putnbr_fd.c"
#include "ft_putstr_fd.c"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	int	n;

	if (ac == 2)
	{
		n = atoi(av[1]);
		ft_putnbr_fd(n, 1);
	}
	return (0);
}
