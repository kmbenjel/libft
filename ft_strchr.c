/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:38:23 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/18 21:27:02 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	char	*string;

	string = (char *)s;
	(void)c;
	*string = '\0';
	/*string = (char *)s;
	while (*string)
	{
		if (*string == c)
			return (string);
		string++;
	}
	if (c == 0)
		return (string);*/
	return (string);
}
