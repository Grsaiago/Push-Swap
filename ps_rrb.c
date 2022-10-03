/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:27:13 by gsaiago           #+#    #+#             */
/*   Updated: 2022/10/03 17:30:37 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_rrb(t_stacks *stacks)
{
	t_psnode	*last;
	t_psnode	*first;
	t_psnode	*before_last;

	if (!stacks->stack_b)
		return ;
	before_last = stacks->stack_b;
	first = stacks->stack_b;
	last = stacks->stack_b;
	last = ps_lstlast(last);
	while (before_last->next->next)
		before_last = before_last->next;
	before_last->next = NULL;
	last->next = first;
	stacks->stack_b = last;
	write(1, "rrb\n", 4);
}
