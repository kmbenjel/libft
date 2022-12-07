/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 05:53:37 by kbenjell          #+#    #+#             */
/*   Updated: 2022/12/07 05:53:44 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	current = ft_lstlast(*lst);
	while (current && current != *lst)
	{
		free(current->next);
		ft_stdelone(*lst, del);
		current = ft_lstlast(*lst);
	}
	del(current->content);
	current = NULL;
}
