/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:27:14 by gsaiago           #+#    #+#             */
/*   Updated: 2022/10/03 17:39:18 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_rrr(t_stacks *stacks)
{
	t_psnode	*last;
	t_psnode	*first;
	t_psnode	*second;

	if (!(stacks->stack_a || stacks->stack_b))
		return ;
	second = stacks->stack_a->next;
	first = stacks->stack_a;
	last = stacks->stack_a;
	last = ps_lstlast(last);
	last->next = stacks->stack_a;
	first->next = NULL;
	stacks->stack_a = second;
	second = stacks->stack_b->next;
	first = stacks->stack_b;
	last = stacks->stack_b;
	last = ps_lstlast(last);
	last->next = stacks->stack_b;
	first->next = NULL;
	stacks->stack_b = second;
	write(1, "rrr\n", 4);
}
