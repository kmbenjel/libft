/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:18:43 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/19 10:43:02 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sign(char a)
{
	if (a == '-')
		return (-1);
	if (a == '+')
		return (1);
	return (0);
}

int	ft_isspace(char c)
{
	char	*str;

	str = "\t\n\v\f\r ";
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	char			*a;
	unsigned int	i;
	int				sign;

	a = (char *)str;
	i = 0;
	sign = 1;
	while (ft_isspace(*a))
		a++;
	if (!ft_isdigit(*a) && !ft_sign(*a))
		return (0);
	if (ft_sign(*a))
	{
		sign = ft_sign(*a);
		a++;
	}
	while (ft_isdigit(*a))
	{
		i *= 10;
		i += *a - 48;
		a++;
	}
	return (i * sign);
}
