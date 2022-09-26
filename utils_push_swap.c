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

void	create_stack_a(int ac, char **av, t_psnode **stack)
{
	int		i;
	t_psnode	*node;

	i = 0;
	while (++i < ac)
	{
		node = ps_lstnew(ft_atoi(av[i]));
		ps_lstadd_back(stack, node);
	}
	index_stack(stack, ac);
}

void	index_stack(t_psnode **stack, int ac)
{
	int		i;
	int		aux;
	t_psnode	*small_node;
	t_psnode	*node;

	i = 1;
	aux = 0;
	while (i < ac)
	{
		aux = 0;
		node = *stack;
		while (node)
		{
			if ((aux <= node->value) && (node->index == 0))
			{
				aux = node->value;
				small_node = node;
			}
			node = node->next;
		}
		small_node->index = ac - i;
		i++;
	}
}
void	print_nodes(t_psnode *lst)
{
	t_psnode	*node;

	node = lst;
	while (node)
	{
		ft_printf("value > |%d|\nindex > |%d|\n-----------\n", node->value, node->index);
	node = node->next;
	}

}
