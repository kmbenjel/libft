/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:48:20 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/15 22:52:53 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p;

	//char	*tmp;
	p = dst;
	if (!src && !dst)
		return (0);
	while (len--)
		if (src[])
			*(p + len) = *((char *)src + len);
	return (dst);
}
