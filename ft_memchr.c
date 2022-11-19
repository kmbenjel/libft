/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:27:20 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/19 08:00:57 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	unsigned char	character;

	string = (unsigned char *)s;
	character = c;
	while (n)
	{
		if (*string == character)
			return (string);
		string++;
		n--;
	}
	return (0);
}
