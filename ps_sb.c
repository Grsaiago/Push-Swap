/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:14:27 by gsaiago           #+#    #+#             */
/*   Updated: 2022/10/03 17:39:01 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_sb(t_stacks *stacks)
{
	core_sb(stacks);
	write(1, "sb\n", 3);
	return ;
}

void	core_sb(t_stacks *stacks)
{
	t_psnode	*second;
	t_psnode	*third;
	int			sa_len;

	sa_len = ps_lstsize(stacks->stack_b);
	if (!stacks->stack_b->next)
		return ;
	second = stacks->stack_b->next;
	if (sa_len == 2)
	{
		second->next = stacks->stack_b;
		stacks->stack_b->next = NULL;
		stacks->stack_b = second;
	}
	else
	{
		third = stacks->stack_b->next->next;
		stacks->stack_b->next = third;
		second->next = stacks->stack_b;
		stacks->stack_b = second;
	}
	return ;
}
