/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 20:28:36 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/05 23:07:46 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	splits_count(char const *s, char c)
{
	int	splits;
	int	i;

	splits = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
		}
		else
		{
			splits++;
			while (s[i] != c)
				i++;
		}
	}
	return (splits);
}

int	*splits_charcount(char const *s, char c, int sc)
{
	int	i;
	int	j;
	int	*counts;

	i = 0;
	j = 0;
	counts = (int *)malloc((sc + 1) * sizeof(int));
	if (!counts)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
		}
		else
		{
			while (s[i] != c)
			{
				counts[j]++;
				i++;
			}
			j++;
		}
	}
	counts[j] = 0;
	return (counts);
}

char	**ft_split(char const *s, char c)
{
	char	**splits;
	int		*counts;
	int		sc;
	int		i;
	int		j;

	sc = splits_count(s, c);
	counts = splits_charcount(s, c, sc);
	i = 0;
	j = 0;
	splits = (char **)malloc((sc + 1) * sizeof(char *));
	if (!splits)
		return (0);
	while (i < sc)
	{
		splits[i] = (char *)malloc((counts[i] + 1) * sizeof(char));
		i++;
	}
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
		}
		else
		{
			while (s[i] != c)
			{
				splits[j][i] = s[i];
				i++;
			}
			j++;
		}
	}
	return (splits);
}
