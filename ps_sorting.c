/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:27:21 by gsaiago           #+#    #+#             */
/*   Updated: 2022/10/09 11:38:09 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_three_sort(t_stacks *stacks)
{
	t_psnode	*stack_a;

	stack_a = stacks->stack_a;
	if (is_ordered(stacks))
		return ;
	if (stack_a->index == 0)
		first_is_zero(stacks);
	else if (stack_a->index == 1)
		first_is_one(stacks);
	else if (stack_a->index == 2)
		first_is_two(stacks);
	return ;
}

void	ps_five_sort(t_stacks *stacks)
{
	int	len_sa;
	int	next_i;
	int	next_i_distance;

	next_i = 0;
	while (next_i < 2)
	{
		len_sa = ps_lstsize(stacks->stack_a);
		next_i_distance = find_next_i(stacks, next_i);
		if (len_sa != 1 && (next_i_distance < len_sa / 2))
			ra_n_times(stacks, next_i_distance);
		else if (len_sa != 1 && (next_i_distance >= len_sa / 2))
			rra_n_times(stacks, len_sa - next_i_distance);
		move_pb(stacks);
		next_i++;
	}
	stacks->stack_a->index = -1;
	stacks->stack_a->next->index = -1;
	stacks->stack_a->next->next->index = -1;
	index_stack(&stacks->stack_a, 4);
	if (!is_ordered(stacks))
		ps_three_sort(stacks);
	while (stacks->stack_b)
		move_pa(stacks);
}

void	ps_radix(t_stacks *stacks)
{
	int			i;
	int			high_bit;
	int			bit;
	t_psnode	*head_a;

	bit = 0;
	high_bit = find_highest_bit(stacks->len_stack_a);
	while (bit <= high_bit)
	{
		i = 0;
		while (i < stacks->len_stack_a)
		{
			head_a = stacks->stack_a;
			if (head_a->index & (1 << bit))
				move_ra(stacks);
			else
				move_pb(stacks);
			i++;
		}
		while (stacks->stack_b)
			move_pa(stacks);
		if (is_ordered(stacks))
			return ;
		bit++;
	}
}
