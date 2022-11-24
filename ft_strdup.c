/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:39:58 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/24 20:50:06 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*strdup(const char *s1)
{
	char	*copy;

	copy = malloc(ft_strlen(s1) + 1);
	return (ft_memcpy(copy, s1, ft_strlen(s1)));
}
