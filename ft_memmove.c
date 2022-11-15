/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:48:20 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/15 21:23:44 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p;
	char	*tmp;
	char	*source;
	int		i;

	i = 0;
	p = dst;
	tmp = (char *)src + len * 2;
	source = (char *)src;
	if (!dst && !src)
		return (0);
	while (source[i])
	{
		*tmp = *source;
		i++;
	}
	while (len--)
		*(p + len) = *tmp;
	return (dst);
}
