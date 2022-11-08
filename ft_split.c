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
	//free(counts);
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

	sc = splits_count(s, c, 0, 0);
	counts = splits_charcount(s, c, sc, 0, 0);
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
	i = sc - 1;
	//free(splits);
	// while (i >= 0)
	// {
	//     free(splits[i]);
	//     i--;
	// }
	return (splits);
}

int	main(void)
{
	int i;
	const char *s;
	char **split;

	s = "ccXXXxxXccccAAvAAcccccDDvDDcLLvLLcccc";
	split = ft_split(s, 'p');
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}
