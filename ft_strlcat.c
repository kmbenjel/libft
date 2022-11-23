/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 00:40:00 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/23 03:58:27 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;
	size_t	lendst;

	i = 0;
	lendst = 0;
	srcsize = 0;
	if (dst && src)
	{
		lendst = ft_strlen(dst);
		srcsize = ft_strlen(src);
	}
	if (dstsize <= lendst)
		return (dstsize + srcsize);
	if (dstsize > 0)
	{
		while (src[i] && lendst + i < dstsize - 1)
		{
			dst[lendst + i] = src[i];
			i++;
		}
		dst[lendst + i] = '\0';
	}
	return (lendst + srcsize);
}
