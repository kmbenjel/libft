/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 07:29:08 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/23 08:29:30 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

unsigned int static	ft_count_target(int n)
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

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	target;
	unsigned int	i;

	target = ft_count_target(n);
	str = malloc(target);
	if (!str)
		return (0);
	if (n == -2147483648)
	{
		str = "-2147483648";
		return (str);
	}
	if (n < 0)
	{
		*str = '-';
		n *= -1;
	}
	str[target - 1] = '\0';
	str += target - 1;
	i = target - 1;
	if (!n)
	{
		*(str--) = '0';
	}
	else
		while (n && str-- && i--)
		{
			*str = n % 10 + '0';
			n /= 10;
		}
	return (str - i);
}
