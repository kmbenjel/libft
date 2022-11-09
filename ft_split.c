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
	splits++;
	return (splits);
}

int	*splits_charcount(char const *s, char c, int sc, int i, int j)
{
	int	*counts;

	counts = (int *)malloc(sc * sizeof(int));
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
		else //if (s[i] == c)
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
	int		j;
	int		k;
	int		l;

	if (!s)
		return (NULL);
	sc = splits_count(s, c, 0, 0);
	counts = splits_charcount(s, c, sc, 0, 0);
	i = 0;
	j = 0;
	k = 0;
	l = 0;
	splits = malloc(sc * sizeof(char *));
	if (!splits)
		return (0);
	while (i <= sc)
	{
		splits[i] = (char *)malloc((counts[i] + 1) * sizeof(char));
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
			while (k)
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
		else //if (s[i] == c)
			i++;
	}
	splits[j] = 0;
	return (splits);
}
