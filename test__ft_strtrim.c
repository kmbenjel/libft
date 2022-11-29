#include "ft_memcpy.c"
#include "ft_strdup.c"
#include "ft_strlcpy.c"
#include "ft_strlen.c"
#include "ft_strncmp.c"
#include "ft_strnstr.c"
#include "ft_strtrim.c"
#include "libft.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int	main(int ac, char **av)
{
	if (ac == 3)
		printf("__%s__\n", ft_strtrim(av[1], av[2]));
	return (0);
}
