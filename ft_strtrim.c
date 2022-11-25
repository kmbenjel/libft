/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:39:02 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/25 09:17:41 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trimmed;
	char			*last;
	unsigned int	times;
	unsigned int	start;
	unsigned int	lresult;

	times = 0;
	start = 0;
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	last = (char *)s1 + ft_strlen(s1) - ft_strlen(set);
	if (ft_strnstr(s1, set, ft_strlen(set)) == (char *)s1 && !times++)
		start += ft_strlen(set);
	if (ft_strnstr(last, set, ft_strlen(set)) == last && last != (char *)s1)
		times++;
	if (times == 0)
		return (ft_strdup(s1));
	lresult = ft_strlen(s1) - ft_strlen(set) * times;
	trimmed = (char *)s1;
	trimmed = ft_strdup(trimmed + start);
	if (!trimmed)
		return (0);
	//if (lresult)
	//	trimmed[lresult] = 0;
	return (trimmed);
}
