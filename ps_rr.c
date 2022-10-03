/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:27:10 by gsaiago           #+#    #+#             */
/*   Updated: 2022/10/03 14:27:11 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_rr(t_stacks *stacks)
{
	t_psnode	*last;
	t_psnode	*first;
	t_psnode	*before_last;

	before_last = stacks->stack_b;
	first = stacks->stack_b;
	last = stacks->stack_b;
	last = ps_lstlast(last);
	while (before_last->next->next)
		before_last = before_last->next;
	before_last->next = NULL;
	last->next = first;
	stacks->stack_b = last;
	before_last = stacks->stack_a;
	first = stacks->stack_a;
	last = stacks->stack_a;
	last = ps_lstlast(last);
	while (before_last->next->next)
		before_last = before_last->next;
	before_last->next = NULL;
	last->next = first;
	stacks->stack_a = last;
	write (1, "rr\n", 3);
}
