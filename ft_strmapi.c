/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 03:43:01 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/27 00:56:07 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


void	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	unsigned int	i;

	p = malloc(ft_strlen(s) + 1);
	if (!p)
		return (0);
	ft_strlcpy(p, s, ft_strlen(s) + 1);
	i = 0;
	while (*(p + i))
	{
		f(i, *(p + i));
		i++;
	}
	*(p + i) = 0;
	return (p);
}
