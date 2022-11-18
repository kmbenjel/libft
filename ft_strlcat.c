/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 00:40:00 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/18 16:43:13 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srcsize;

	i = -1;
	j = 0;
	srcsize = ft_strlen(src);
	if (dstsize > 0 && i < dstsize + srcsize && srcsize)
	{
		while (++i < srcsize - 1)
			dst[i] = src[i];
		while (++i < srcsize + dstsize)
		{
			dst[i] = src[j];
			j++;
		}
	}
	return (srcsize + dstsize);
}
