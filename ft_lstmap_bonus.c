/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:39:42 by kbenjell          #+#    #+#             */
/*   Updated: 2022/12/07 09:14:20 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*curr;
	t_list	*new;
	t_list	*start;

	if (!lst || !f || !del)
		return ;
	curr = lst;
	new = NULL;
	start = NULL;
	while (curr)
	{
		new = (t_list *)malloc(sizeof(t_list));
		if (curr == lst)
			start = new;
		new->content = curr->content;
		new->next = curr->next;
		curr = curr->next;
	}
	ft_lstiter(start, f);
	return (start);
}
