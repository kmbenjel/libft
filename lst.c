//function that loops throught the t_list lst and applies the function f to each link returning a new list. call del on the content when a new list node allocation fails,
		// prototype it this way: t_list	*ft_lstmap(t_list *lst,void *(*f)(void *),
		// 	void (*del)(void *)).

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	new = NULL;
	if (!lst || !f || !del)
		return (NULL
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
