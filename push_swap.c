/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:03:13 by gsaiago           #+#    #+#             */
/*   Updated: 2022/10/03 17:37:49 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	*stacks;

	if (argc < 2)
		return (0);
	stacks = &(t_stacks){0};
	not_valid_args(argc, argv);
	create_stack_a(argc, argv, &stacks->stack_a);
	//validation for argc == 1
	//algo for argc > 1 && < 5
	if (!stacks->stack_a)
		exit_func(stacks);
	stacks->len_stack_a = ps_lstsize(stacks->stack_a);
//	ft_printf("stack_a size > |%d|\n", stacks->len_stack_a); // debug
//	ft_printf("Stack a input:\n"); // debug
//	print_nodes(stacks->stack_a); // debug
	if (is_ordered(stacks))
		;
	else if (argc == 3)
		move_sa(stacks);
//	ft_printf("highest bit de 8 é > |%d|\n", find_highest_bit(8)); //debug
	else if (argc == 4)
		ps_smallsort(stacks);
	else
		ps_radix(stacks);
//	ft_printf("Stack b:\n"); // debug
//	print_nodes(stacks->stack_b); // debub
//	ft_printf("Stack a sorted:\n"); // debug
//	print_nodes(stacks->stack_a); // debug
	ps_lstclear(&stacks->stack_a);
//	ps_lstclear(&stacks->stack_b); //debug
}
