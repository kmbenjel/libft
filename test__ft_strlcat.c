#include "ft_strlcat.c"
#include "ft_strlen.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char			*src;
	unsigned int	size;
	int				return_strlcat;
	int				return_ft_strlcat;
	char			dest1[50];
	char			dest2[50];

	src = argv[2];
	if (argc == 4)
	{
		size = atoi(argv[3]);
		//STRLCAT
		strcpy(dest1, argv[1]);
		return_strlcat = strlcat(dest1, src, size);
		printf("\nstrlcat: %u\n", return_strlcat);
		printf("%s\n", dest1);
		printf("--\n");
		//FR_STRLCAT
		strcpy(dest2, argv[1]);
		return_ft_strlcat = ft_strlcat(dest2, src, size);
		printf("ft_strlcat: %u\n", return_ft_strlcat);
		printf("%s\n\n", dest2);
	}
}
