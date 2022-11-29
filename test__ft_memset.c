// Test derived from a GeeksForGeeks sample code.
// C program to demonstrate working of memset()
#include "ft_memset.c"
#include "libft.h"
#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	char	*str;
	char	*btr;

	if (ac == 3)
	{
		str = av[1];
		btr = av[2];
		printf("\nBefore memset():%s\n", str);
		// Fill 8 characters starting from str[13] with '.'
		memset(str + 6, 'X', 8 * sizeof(char));
		printf("After memset(): %s\n", str);
		printf("\nBefore ft_memset():%s\n", btr);
		// Fill 8 characters starting from str[13] with '.'
		ft_memset(btr + 6, 'X', 8 * sizeof(char));
		printf("After ft_memset(): %s\n", btr);
		return (0);
	}
}
