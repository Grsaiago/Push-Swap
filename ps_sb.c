/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:14:27 by gsaiago           #+#    #+#             */
/*   Updated: 2022/09/26 16:24:52 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_sb(t_stacks *stacks)
{
	t_psnode	*last;

	last = stacks->stack_b;
	if (ps_lstsize(last) <= 2)
		move_small_sb(stacks);
	else
		move_big_sb(stacks);
	write(1, "sb\n", 3);
	return ;
}

void	move_big_sb(t_stacks *stacks)
{
	t_psnode	*middle;
	t_psnode	*last;
	t_psnode	*third;

	last = stacks->stack_b;
	middle = stacks->stack_b;
	third = stacks->stack_b;
	last = ps_lstlast(last);
	while (middle->next->next)
		middle = middle->next;
	while (third->next->next->next)
		third = third->next;
	middle->next = NULL;
	third->next = last;
	last->next = middle;
	return ;
}

void	move_small_sb(t_stacks *stacks)
{
	t_psnode	*first;
	t_psnode	*second;

	first = stacks->stack_b;
	second = first->next;
	first->next = NULL;
	second->next = first;
	stacks->stack_b = second;
	return ;
}
