/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:42:15 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/18 22:22:44 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			character;
	char			*string;
	unsigned int	i;

	i = ft_strlen(s);
	string = (char *)s;
	character = (char)c;
	while (i--)
		if (s[i] == character)
			return (&string[i]);
	if (character == 0)
		return (&string[ft_strlen(s)]);
	return (0);
}
