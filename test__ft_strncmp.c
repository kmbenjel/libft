#include "ft_strncmp.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	main(int argc, char **argv)
{
	int	diff_ft;
	int	diff;

	if (argc != 4)
		printf("Please give three args\n");
	else
	{
		diff_ft = ft_strncmp(argv[1], argv[2], atoi(argv[3]));
		diff = strncmp(argv[1], argv[2], atoi(argv[3]));
		printf("ft_strncmp return: %d\n", diff_ft);
		printf("strncmp return: %d\n", diff);
	}
}
