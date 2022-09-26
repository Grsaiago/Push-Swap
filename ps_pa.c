/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:35:22 by gsaiago           #+#    #+#             */
/*   Updated: 2022/09/26 16:49:39 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_pa(t_stacks *stacks)
{
	t_psnode	*pop;
	t_psnode	*aux;

	pop = stacks->stack_b;
	aux = stacks->stack_b;
	if (!pop)
		return ;
	while (pop->next)
		pop = pop->next;
	while (aux->next->next)
		aux = aux->next;
	aux->next = NULL;
	ps_lstadd_back(stack->&stack_a, pop);
	write(1, "pa\n", 3);
}
