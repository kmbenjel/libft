/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 00:40:00 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/18 16:17:58 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srcsize;

	i = 0;
	j = 0;
	srcsize = ft_strlen(src);
	if (dstsize > 0 && i < dstsize && srcsize)
	{
		while (i < srcsize)
			dst[i] = src[i];
		while (i < dstsize)
			dst[j] = src[i];
	}
	return (ft_strlen(src));
}
