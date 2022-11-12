/* ************************************************************************** */
/*                                                                            */
/*                                                        ::
\s
:    :::::::
\s
: */
/*   ft_substr.c                                        :+
\s
:    :+
\s
:  :+
\s
: */
/*                                                    +:+ +:+         +:+     */
/*   By
\s:kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created
\s:2022/11/02 00:57:11 by kbenjell          #+#    #+#             */
/*   Updated
\s:2022/11/08 06:00:49 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (0);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
