#include "push_swap.h"

t_psnode	*ps_lstnew(int value)
{
	t_psnode	*new;

	new = (t_psnode *)malloc(sizeof(t_psnode));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = 0;
	new->next = NULL;
	return (new);
}


void	ps_lstadd_back(t_psnode **lst, t_psnode *new)
{
	t_psnode	*last_node;

	if (!new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		last_node = *lst;
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new;
	}
	return ;
}

void	ps_lstclear(t_psnode **lst)
{
	void		*aux;
	t_psnode	*node;

	if (!lst)
		return ;
	node = *lst;
	while (node)
	{
		aux = node->next;
		free(node);
		node = aux;
	}
	*lst = NULL;
	return ;
}
