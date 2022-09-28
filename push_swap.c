/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:03:13 by gsaiago           #+#    #+#             */
/*   Updated: 2022/09/26 16:49:53 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stacks	*stacks;
	int		lst_size;
	
	if (argc < 2)
	{
		write(1, "Error!\n", 7);
		exit(1);
	}
	//check_params(argc, argv);
	stacks = &(t_stacks){0};
	create_stack_a(argc, argv, &stacks->stack_a);
	lst_size = ps_lstsize(stacks->stack_a);
	ft_printf("stack_a size > |%d|\n", lst_size); // debug
	create_stack_a(argc, argv, &stacks->stack_b); //debug
	//sorting_algo(t_stacks *stacks);
	ft_printf("Stack a:\n"); // debug
	print_nodes(stacks->stack_a); // debug
	ft_printf("Stack b:\n"); // debug
	print_nodes(stacks->stack_b); // debug
	ps_lstclear(&stacks->stack_a);
	ps_lstclear(&stacks->stack_b); //debug
}
