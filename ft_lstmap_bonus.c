/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 09:18:01 by kbenjell          #+#    #+#             */
/*   Updated: 2022/12/07 09:29:45 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*curr;
	t_list	*new;
	t_list	*start;

	if (!lst || !f || !del)
		return (NULL);
	curr = lst;
	new = NULL;
	start = NULL;
	while (curr)
	{
		new = (t_list *)malloc(sizeof(t_list));
		if (curr == lst)
			start = new;
		new->content = f(curr->content);
		;
		curr = curr->next;
	}
	return (start);
}
