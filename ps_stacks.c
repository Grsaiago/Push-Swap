/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stacks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:03:06 by gsaiago           #+#    #+#             */
/*   Updated: 2022/10/07 13:47:07 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack_a(int ac, char **av, t_psnode **stack)
{
	int			i;
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
	int			i;
	int			aux;
	t_psnode	*small_node;
	t_psnode	*node;

	i = 1;
	while (i < ac)
	{
		aux = INT_MIN;
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
		ft_printf("value > |%d|\nindex > |%d|\n-----------\n",
			node->value, node->index);
	node = node->next;
	}
}
