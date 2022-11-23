/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:42:13 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/23 09:58:28 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static int	ft_splits_count(char const *s, char c, int splits, int i)
{
	while (s[i])
	{
		if (s[i] != c)
		{
			splits++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (splits);
}

/*	FT_SPLITS_COUNT() is intended to count how many char strings should
    occur in the array of strings returned from FT_SPLIT() . */

static int	*ft_splits_charcount(char const *s, char c, int sc, int i)
{
	int	*counts;

	counts = (int *)malloc(sc * sizeof(int));
	if (!counts)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			counts[i] = 0;
			while (*s && *s != c)
			{
				counts[i]++;
				s++;
			}
			i++;
		}
		else
			s++;
	}
	return (counts);
}

/*	FT_SPLITS_CHARCOUNT() is intended to count how many chars should occur
    in every string in the array returned from FT_SPLIT() . */

static char	**ft_splits_filler(char **splits, int *counts, char const *s,
		char c)
{
	int	s_i;
	int	sc_i;

	s_i = 0;
	sc_i = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (counts[s_i]--)
			{
				splits[s_i][sc_i] = *s;
				sc_i++;
				s++;
			}
			splits[s_i][sc_i] = '\0';
			sc_i = 0;
			s_i++;
		}
		else
			s++;
	}
	splits[s_i] = NULL;
	free(counts);
	return (splits);
}

//	`s_i` means split index, `sc_i` means split's char index.

static void	ft_free_previous(char **splits)
{
	int	i;

	i = 0;
	while (splits[i])
	{
		free(splits[i]);
		i++;
	}
	free(splits);
}

/*	FT_FREE_PREVIOUS() is intended to free all allocated memory in case
    allocation for a given string of chars fails. */

char	**ft_split(char const *s, char c)
{
	char	**splits;
	int		*counts;
	int		sc;
	int		i;

	if (!s)
		return (0);
	i = -1;
	sc = ft_splits_count(s, c, 0, 0);
	counts = ft_splits_charcount(s, c, sc, 0);
	splits = malloc((sc + 1) * sizeof(char *));
	if (!splits)
		return (0);
	while (++i < sc)
	{
		splits[i] = malloc((counts[i] + 1) * sizeof(const char));
		if (!splits[i])
		{
			ft_free_previous(splits);
			return (0);
		}
	}
	ft_splits_filler(splits, counts, s, c);
	return (splits);
}
