/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:53:49 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/19 23:51:46 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	char	*fill;
	size_t		counter;

	ptr = malloc(count * size);
	if (count == 0 || size == 0)
		return (ptr);
	fill = (char *)ptr;
	if (!ptr)
		return (0);
	counter = size * count;
	while (counter)
	{
		*fill = '\0';
		fill++;
		counter--;
	}
	return (ptr);
}
