/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:39:02 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/25 12:39:32 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	isfromset(char const *set, char c)
{
	int	i;

	i = 0;
	while (*(set + i))
	{
		if (c == *(set + i))
			return (1);
		i++;
	}
	return (0);
}

static int	calc_start(char const *set, char *p)
{
	unsigned int	start;

	start = 0;
	while (isfromset(set, *(p + start)))
		start++;
	return (start);
}

static int	calc_end(char const *set, char *p)
{
	unsigned int	end;

	end = 0;
	while (isfromset(set, *(p - end)))
		end++;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trimmed;
	char			*p;
	unsigned int	start;
	unsigned int	end;
	unsigned int	lresult;

	p = (char *)s1;
	if (!p || !set)
		return (0);
	if (!ft_strlen(set) || !ft_strlen(p))
		return (ft_strdup(p));
	start = calc_start(set, p);
	end = calc_end(set, p + ft_strlen(p) - 1);
	if (start == ft_strlen(p))
		end = 0;
	lresult = ft_strlen(p) - (start + end);
	trimmed = malloc(lresult + 1);
	if (!trimmed)
		return (0);
	ft_strlcpy(trimmed, p + start, lresult + 1);
	return (trimmed);
}
