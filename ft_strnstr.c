/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:37:49 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/05 07:49:13 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
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
