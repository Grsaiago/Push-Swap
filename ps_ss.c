/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:17:13 by gsaiago           #+#    #+#             */
/*   Updated: 2022/09/26 16:23:12 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_ss(t_stacks *stacks)
{
	t_psnode	*node_a;
	t_psnode	*node_b;

	node_a = stacks->stack_a;
	node_b = stacks->stack_b;
	if (ps_lstsize(node_a) <= 2)
		move_small_sa(stacks);
	else
		move_big_sa(stacks);
	if (ps_lstsize(node_b) <= 2)
		move_small_sb(stacks);
	else
		move_big_sb(stacks);
	write (1, "ss\n", 3);
}
