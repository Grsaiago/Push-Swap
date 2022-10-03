/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:27:08 by gsaiago           #+#    #+#             */
/*   Updated: 2022/10/03 14:27:09 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_rb(t_stacks *stacks)
{
	t_psnode	*last;
	t_psnode	*first;
	t_psnode	*second;

	if (!stacks->stack_b)
		return ;
	second = stacks->stack_b->next;
	first = stacks->stack_b;
	last = stacks->stack_b;
	last = ps_lstlast(last);
	last->next = stacks->stack_b;
	first->next = NULL;
	stacks->stack_b = second;
	write(1, "rb\n", 3);
}
