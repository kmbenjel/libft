/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:48:20 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/17 08:22:33 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	char	tmp;

	d = dst;
	s = (char *)src;
	tmp = 'i';
	if (!src && !dst)
		return (0);
	if (len == 0)
		return (dst);
	while (len--)
	{
		if (src < dst)
		{
			tmp = *((char *)src + len);
			d[len] = *((char *)src + len);
			*((char *)src + len) = tmp;
		}
		else
			d[len] = *((char *)src + len);
	}
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
