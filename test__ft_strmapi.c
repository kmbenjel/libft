/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test__ft_strmapi.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:10:44 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/28 18:10:49 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"
#include "ft_strmapi.c"
#include "libft.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


/*char	f(char c)
{
	return (c + 1);
}*/
char	addOne(unsigned int i, char c)
{
	(void)i;
	return (c + 32);
}

int	main(void)
{
	void	*ptr;
	char	*p;
	char	*s;

	ptr = "hello wrld";
	p = ptr;
	s = ft_strmapi("ABC", addOne);
	printf("%s\n", s);
	return (0);
}
