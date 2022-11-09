#include <stdio.h>
#include <stdlib.h>

static int	splits_count(char const *s, char c, int splits, int i)
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

int	*splits_charcount(char const *s, char c, int sc, int i, int j)
{
	int	*counts;

	counts = (int *)malloc((sc + 1) * sizeof(int));
	if (!counts)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			counts[j] = 0;
			while (s[i] && s[i] != c)
			{
				counts[j]++;
				i++;
			}
			j++;
		}
		else
			i++;
	}
	counts[j] = 0;
	return (counts);
}

char	**ft_splits_filler(char **splits, int *counts, int s_i, int sc_i)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (counts[i])
			{
				splits[s_i][sc_i] = *s;
				counts[s_i]--;
				sc_i++;
				i++;
			}
			splits[s_i][ci] = 0;
			sc_i = 0;
			s_i++;
		}
		else
			i++;
	}
	splits[s_i] = 0;
	return (splits);
}

//	`s_i` means split index, `sc_i` means split's char index.

char	**ft_split(char const *s, char c)
{
	char	**splits;
	int		*counts;
	int		sc;
	int		i;
	int		ci;

	if (!s)
		return (NULL);
	sc = splits_count(s, c, 0, 0);
	counts = splits_charcount(s, c, sc, 0, 0);
	i = 0;
	ci = 0;
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
	ft_splits_filler(splits, counts, 0, 0);
	free(counts);
	return (splits);
}
