// Create a function that clears linked list from a certain point,
	// it should use del and free. it uses current as a temporary variable to store the next node,
	// must be protoryped: void clear_list(list_t **lst, void(del*)(void *)).

void	clear_list(list_t **lst, void(del *)(void *))
{
	list_t	*current;
	list_t	*temp;

	current = *lst;
	while (current != NULL)
	{
		temp = current->next;
		del(current->data);
		free(current);
		current = temp;
	}
	*lst = NULL;
}
