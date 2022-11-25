/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:39:02 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/25 05:57:05 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trimmed;
	char			*last;
	unsigned int	times;
	unsigned int	lset;
	unsigned int	ls1;

	times = 0;
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	lset = ft_strlen(set);
	ls1 = ft_strlen(s1);
	last = (char *)s1 + ls1 - lset;
	if (ft_strnstr(s1, set, lset == (char *)s1))
		times++;
	if (ft_strnstr(last, set, lset == last))
		times++;
	if (times == 0)
		return (ft_strdup(s1));
	trimmed = ft_strdup(s1 + lset, ls1 - lset * times + 1);
	if (!trimmed)
		return (0);
	trimmed[ft_strlen(trimmed) - 1] = 0;
	return (trimmed);
}
