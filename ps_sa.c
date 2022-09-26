/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:13:33 by gsaiago           #+#    #+#             */
/*   Updated: 2022/09/26 16:24:44 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_sa(t_stacks *stacks)
{
	t_psnode	*last;

	last = stacks->stack_a;
	if (ps_lstsize(last) <= 2)
		move_small_sa(stacks);
	else
		move_big_sa(stacks);
	write(1, "sa\n", 3);
	return ;
}

void	move_big_sa(t_stacks *stacks)
{
	t_psnode	*middle;
	t_psnode	*last;
	t_psnode	*third;

	last = stacks->stack_a;
	middle = stacks->stack_a;
	third = stacks->stack_a;
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

void	move_small_sa(t_stacks *stacks)
{
	t_psnode	*first;
	t_psnode	*second;

	first = stacks->stack_a;
	second = first->next;
	first->next = NULL;
	second->next = first;
	stacks->stack_a = second;
	return ;
}
