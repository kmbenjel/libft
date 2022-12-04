/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:16:11 by kbenjell          #+#    #+#             */
/*   Updated: 2022/12/04 14:29:15 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

static char	*i_to_a(int n)
{
	char	*str;

	*str = 0;
	if (n == -2147483648)
	{
		n++;
		i_to_a(n);
		str[ft_strlen(str) - 1] = '8';
		return (str);
	}
}
void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	ft_putstr_fd(s, fd);
	free(s);
}
