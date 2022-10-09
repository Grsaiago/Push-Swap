/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_three_sort_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:05:24 by gsaiago           #+#    #+#             */
/*   Updated: 2022/10/09 12:10:25 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	first_is_zero(t_stacks *stacks)
{
	if (stacks->stack_a->next->next->index == 1)
	{
		move_rra(stacks);
		move_sa(stacks);
	}
	return ;
}

void	first_is_one(t_stacks *stacks)
{
	if (stacks->stack_a->next->next->index == 0)
		move_rra(stacks);
	else
		move_sa(stacks);
	return ;
}

void	first_is_two(t_stacks *stacks)
{
	if (stacks->stack_a->next->next->index == 0)
	{
		move_ra(stacks);
		move_sa(stacks);
	}
	else
		move_ra(stacks);
	return ;
}
