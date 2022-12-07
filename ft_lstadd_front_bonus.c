/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 02:44:01 by kbenjell          #+#    #+#             */
/*   Updated: 2022/12/07 03:00:28 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	lst->content = new->content;
	lst->next = new->next;
	*lst = new;
}
