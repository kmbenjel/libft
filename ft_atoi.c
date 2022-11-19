/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:18:43 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/19 10:05:53 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	ft_sign(char a)
{
	if (a == '-')
		return (-1);
	if (a == '+')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	char	*a;
	int		i;
	int		sign;

	a = (char *)str;
	i = 0;
	sign = ft_sign(*a);
	if (!ft_sign(*a) && !ft_isdigit(*a))
		return (0);
	while (*a >= 48)
	{
	}
	return (i);
}
