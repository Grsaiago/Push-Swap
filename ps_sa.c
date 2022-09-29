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

void	core_sa(t_stacks *stacks)
{
	t_psnode	*second;
	t_psnode	*third;
	int		sa_len;
	
	sa_len = ps_lstsize(stacks->stack_a);
	if (!stacks->stack_a->next)
		return ;
	second = stacks->stack_a->next;
	if (sa_len == 2)
	{
		second->next = stacks->stack_a;
		stacks->stack_a->next = NULL;
		stacks->stack_a = second;
	}
	else	
	{
		third = stacks->stack_a->next->next;
		stacks->stack_a->next = third;
		second->next = stacks->stack_a;
		stacks->stack_a = second;
	}
	return ;
}
void	move_sa(t_stacks *stacks)
{
	core_sa(stacks);
	write(1, "sa\n", 3);
	return ;
}
