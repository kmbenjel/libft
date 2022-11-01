/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:37:49 by kbenjell          #+#    #+#             */
/*   Updated: 2022/10/31 00:39:37 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

unsigned int	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned int	i;

	i = 0;
	while (haystack[i] && i <= len - ft_strlen(needle))
	{
		if ((ft_strncmp(&haystack[i], needle, ft_strlen(needle))) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
