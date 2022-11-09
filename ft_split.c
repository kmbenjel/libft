#include <stdio.h>
#include <stdlib.h>

static int	splits_count(char const *s, char c, int splits, int i)
{
	while (s[i])
	{
		if (s[i] != c)
		{
			splits++;
			while (s[i] != c)
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
			while (s[i] != c)
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
		if (!splits[i] && i != sc)
			return (0);
		i++;
	}
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (counts[i])
			{
				splits[i][ci] = *s;
				counts[i]--;
				ci++;
				s++;
			}
			splits[i][ci] = 0;
			ci = 0;
			i++;
		}
		else
			s++;
	}
	free(counts);
	splits[i] = 0;
	return (splits);
}
