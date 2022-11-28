/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 03:43:01 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/28 18:27:48 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	char			*str;
	unsigned int	i;

	if (!s || !f)
		return (0);
	str = (char *)s;
	p = malloc(ft_strlen(s) + 1);
	if (!p)
		return (0);
	i = 0;
	while (*(str + i))
	{
		*(p + i) = f(i, *(str + i));
		i++;
	}
	*(p + i) = 0;
	return (p);
}
