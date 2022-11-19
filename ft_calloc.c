/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:53:49 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/19 23:42:35 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	char	*fill;
	int		counter;

	ptr = malloc(count * size);
	fill = (char *)ptr;
	counter = size * count;
	if (!ptr || count == 0 || size == 0)
		return (0);
	while (counter)
	{
		*fill = '\0';
		fill++;
		counter--;
	}
	return (ptr);
}
