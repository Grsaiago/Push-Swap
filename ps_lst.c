#include "push_swap.h"

t_psnode	*ps_lstnew(int value)
{
	t_psnode	*new;

	new = (t_psnode *)malloc(sizeof(t_psnode));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = -1;
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

void	ps_lstadd_front(t_psnode **lst, t_psnode *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

t_psnode	*ps_lstlast(t_psnode *lst)
{
	t_psnode	*node;

	if (!lst)
		return (NULL);
	node = lst;
	while (node->next)
		node = node->next;
	return (node);
}

int	ps_lstsize(t_psnode *lst)
{
	t_psnode	*node;
	int			i;

	if (!lst)
		return (0);
	i = 1;
	node = lst;
	while (node->next)
	{
		i++;
		node = node->next;
	}
	return (i);
}
