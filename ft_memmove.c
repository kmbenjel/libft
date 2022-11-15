/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:48:20 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/15 21:12:38 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p;
	char	*tmp;
	int		i;

	i = -1;
	p = dst;
	if (!dst && !src)
		return (0);
	while ((char *)src[i++])
		*tmp = *(char *)src;
	while (len--)
		*(p + len) = *tmp;
	return (dst);
}
