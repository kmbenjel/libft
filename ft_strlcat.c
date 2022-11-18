/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 00:40:00 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/18 17:02:10 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srcsize;
	size_t	lendst;

	i = 0;
	j = 0;
	lendst = ft_strlen(dst);
	srcsize = ft_strlen(src);
	if (dstsize > 0 && i <= dstsize + srcsize && srcsize)
	{
		while (i < lendst && i < dstsize)
			i++;
		while (i < dstsize - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		i++;
	}
	return (i);
}
