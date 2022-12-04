/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 07:29:08 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/24 00:16:02 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_count_target(int n)
{
	unsigned int	i;

	i = 1;
	if (n == -2147483648)
		return (ft_count_target(n / 10) + 1);
	if (n < 0)
		i++;
	if (n == 0)
		return (2);
	while (n && i++)
		n /= 10;
	return (i);
}

/*	FT_COUNT_TARGET counts how much bytes should be allocated
	for the resulting ascii-string, it makes room for '-'
	and the trailing '\0'	*/

char	*ft_complete(char *str, char *p, int n, unsigned int target)
{
	p[target - 1] = 0;
	p += target - 2;
	if (!n)
	{
		*str = '0';
		return (str);
	}
	if (n < 0)
	{
		*str = '-';
		n *= -1;
	}
	while (n)
	{
		*p = n % 10 + '0';
		n /= 10;
		p--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	char			*p;
	unsigned int	target;

	target = ft_count_target(n);
	str = malloc(target);
	p = str;
	if (!str)
		return (0);
	if (n == -2147483648)
	{
		n++;
		ft_complete(str, p, n, target);
		str[target - 2] = '8';
		return (str);
	}
	return (ft_complete(str, p, n, target));
}
