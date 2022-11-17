/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 04:08:04 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/17 05:32:59 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memcpy.c"
#include "ft_memmove.c"
#include <stdio.h>
#include <string.h>
int	main(void)
{
	int integer = 0;
	int *i = &integer;
	int *j = i + 1;

	if (i < j)
		printf("i < j");
	else
		printf("j < i = Othman:win");
	printf("\ni: %p\n", i);
	printf("j: %p\n", j);
	//printf("%s", ft_memcpy(p, s,0))
}
