/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:57:11 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/23 06:11:28 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		len = 0;
	if (len >= ft_strlen(s) + start)
		len -= len - ft_strlen(s) - start;
	sub = malloc(len + 1);
	if (!sub)
		return (0);
	i = 0;
	while (i < len && start + i < ft_strlen(s))
	{
		*(sub + i) = *(s + start + i);
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
