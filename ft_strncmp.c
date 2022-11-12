/* ************************************************************************** */
/*                                                                            */
/*                                                        ::
\s
:    :::::::
\s
: */
/*   ft_strncmp.c                                       :+
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
\s:2022/11/03 21:39:09 by kbenjell          #+#    #+#             */
/*   Updated
\s:2022/11/05 07:48:28 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n) {
  size_t i;
  i = 0;
  while ((s1[i] || s2[i]) && i < n) {
    if (s1[i] != s2[i])
      return (s1[i] - s2[i]);
    i++;
  }
  return (0);
}
