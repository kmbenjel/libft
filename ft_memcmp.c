/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 08:05:11 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/19 09:02:32 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*one;
	unsigned char	*two;

	two = (unsigned char *)s2;
	one = (unsigned char *)s1;
	while (n)
	{
		if (*one - *two)
			return (*one - *two);
		one++;
		two++;
		n--;
	}
	return (0);
}
