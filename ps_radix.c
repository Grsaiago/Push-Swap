/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:27:05 by gsaiago           #+#    #+#             */
/*   Updated: 2022/10/03 17:41:26 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_highest_bit(int high_numb)
{
	int	high_bit;

	high_bit = 31;
	while (high_bit >= 0)
	{
		if (high_numb & (1 << high_bit))
			break ;
		high_bit--;
	}
	return (high_bit);
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
