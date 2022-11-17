/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:48:20 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/17 05:11:53 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p;

	p = dst;

	if (!src && !dst)
		return (0);
if(src < dst)
{
	while(len > 0 && len--)
	{
	p[len] = ((char *)src)[len];
	}
	return(dst);
}
else
	ft_memcpy(dst, src,len);
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
