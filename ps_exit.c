/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:26:54 by gsaiago           #+#    #+#             */
/*   Updated: 2022/10/03 14:27:30 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_func(t_stacks *stacks)
{
	if (stacks)
	{
		if (stacks->stack_a)
			ps_lstclear(&stacks->stack_a);
		if (stacks->stack_b)
			ps_lstclear(&stacks->stack_b);
	}
	write(1, "Error!\n", 7);
	exit(EXIT_FAILURE);
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
