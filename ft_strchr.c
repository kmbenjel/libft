/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:38:23 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/18 20:58:00 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (c == '\0' && *(s + 1) == '\0')
			return (*(s + 1));
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
