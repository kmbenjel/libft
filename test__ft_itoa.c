#include <stdio.h>
#include "ft_itoa.c"
#include <stdlib.h>

int main(int ac, char**av)
{
	int n = atoi(av[1]);
	printf("%s", ft_itoa(n));
}
