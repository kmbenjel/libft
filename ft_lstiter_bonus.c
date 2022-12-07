/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 08:38:18 by kbenjell          #+#    #+#             */
/*   Updated: 2022/12/07 08:38:51 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	curr;
	void	*c;

	if (!lst || !f)
		return ;
	curr = lst;
	c = NULL;
	while (current)
	{
		c = curr->content;
		c = f(c);
		curr = curr->next;
	}
}
