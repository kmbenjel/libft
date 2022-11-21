/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 00:39:56 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/20 21:27:43 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p;

	p = dst;
	if (!src && !dst)
		return (0);
	if (dst == src)
		return (dst);
	while (n--)
		*(p + n) = *((char *)src + n);
	return (dst);
}
