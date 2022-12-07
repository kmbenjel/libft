/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:36:01 by kbenjell          #+#    #+#             */
/*   Updated: 2022/12/07 04:56:04 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	current = ft_lstlast(*lst);
	while (current != *lst)
	{
		ft_lstdelone(current, del);
		current = ft_lstlast(*lst);
	}
	//	del(*lst->content);
	*lst = NULL;
}
