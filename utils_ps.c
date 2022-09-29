/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_ps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:03:06 by gsaiago           #+#    #+#             */
/*   Updated: 2022/09/26 14:28:28 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ps_lstadd_front(t_psnode **lst, t_psnode *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
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

void	create_stack_a(int ac, char **av, t_psnode **stack)
{
	int			i;
	t_psnode	*node;

	i = 0;
	while (++i < ac)
	{
		node = ps_lstnew(ft_atoi(av[i]));
		ps_lstadd_front(stack, node);
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
	while (i < ac)
	{
		aux = 0;
		node = *stack;
		while (node)
		{
			if ((aux <= node->value) && (node->index == -1))
			{
				aux = node->value;
				small_node = node;
			}
			node = node->next;
		}
		small_node->index = (ac - 1) - i;
		i++;
	}
	return ;
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
