/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 20:28:36 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/06 00:49:03 by kbenjell         ###   ########.fr       */
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
			counts[j] = 0;
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
	char **splits;
	int *counts;
	int sc;
	int i;
	int j;
	int k;
	int l;

	sc = splits_count(s, c);
	counts = splits_charcount(s, c, sc);
	i = 0;
	j = 0;
	k = 0;
	l = 0;
	splits = malloc((sc + 1) * sizeof(char *));
	if (!splits)
		return (0);
	while (i <= sc)
	{
		splits[i] = malloc((counts[i] + 1) * sizeof(char));
		if (!splits[i])
			return (0);
		i++;
	}
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			k = counts[j];
			while (k > 0)
			{
				splits[j][l] = s[i];
				i++;
				k--;
				l++;
			}
			splits[j][l] = 0;
			l = 0;
			j++;
		}
		else
			i++;
	}
	splits[j] = 0;
	return (splits);
}
