/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 22:44:36 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/17 22:49:39 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int c)
{
	if (c < 97 || c > 122)
		return (0);
	return (1);
}

// a = 97, z = 122

int	ft_isupper(int c)
{
	if (c < 65 || c > 90)
		return (0);
	return (1);
}

// A = 65, Z = 90

int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	return (0);
}
