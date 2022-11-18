/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:38:23 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/18 22:11:12 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*string;
	char	character;

	string = (char *)s;
	character = (char)c;
	while (*string)
	{
		if (*string == character)
			return (string);
		string++;
	}
	if (character == 0)
		return (string);
	return (0);
}
