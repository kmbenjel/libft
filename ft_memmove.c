/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:48:20 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/20 21:47:16 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	n;

	n = len;
	d = dst;
	s = (char *)src;
	if (!src && !dst)
		return (0);
	if (dst == src)
		return (dst);
	if (dst < src)
	{
		while (n--)
			*(d + len - n - 1) = *(s + len - n - 1);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
