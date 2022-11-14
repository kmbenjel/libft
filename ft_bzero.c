/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 00:39:53 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/14 19:46:49 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = s;
	while (n--)
		*(p + n) = 0;
}
