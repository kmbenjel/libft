/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:39:02 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/25 10:43:49 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trimmed;
	unsigned int	start;
	unsigned int	end;
	unsigned int	lresult;
	unsigned int	lset;

	lset = ft_strlen(set);
	start = 0;
	end = ft_strlen(s1);
	lresult = end;
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	while (ft_strnstr(s1 + start, set, lset) == s1 + start)
		start += lset;
	while (ft_strnstr(s1 + lresult - end, set, lset) == s1 + lresult - end)
		end -= lset;
	lresult = end - start;
	trimmed = malloc(lresult + 1);
	ft_strlcpy(trimmed, s1 + start, lresult + 1);
	trimmed[lresult] = 0;
	return (trimmed);
}

/*	lresult is used in */
