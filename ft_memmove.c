/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:48:20 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/17 06:24:18 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p;
	size_t	n;

	p = dst;
	n = len;
	if (!src && !dst)
		return (0);
	while (--n)
		*(p + n) = *((char *)src + n);
	return (dst);
}

/*
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
