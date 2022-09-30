#include "push_swap.h"

unsigned int	find_next_i(t_stacks *stacks, unsigned int next_i)
{
	t_psnode	*stack_a;
	unsigned int	next_i_distance;

	next_i_distance = 0;
	stack_a = stacks->stack_a;
	while (stack_a)
	{
		if (stack_a->index == next_i)
			return (next_i_distance);
		next_i_distance++;
		stack_a = stack_a->next;
	}
	return (next_i_distance);
}

int	is_ordered(t_stacks *stacks)
{
	t_psnode	*stack_a;
	int		aux;

	stack_a = stacks->stack_a;
	aux = 0;
	while (stack_a)
	{
		if (stack_a->index != aux)
			return (0);
		aux++;
		stack_a = stack_a->next;
	}
	return (1);
}

void	ra_n_times(t_stacks *stacks, int n)
{
	while (n > 0)
	{
		move_ra(stacks);
		n--;
	}
	return ;
}

void	rra_n_times(t_stacks *stacks, int n)
{
	while (n > 0)
	{
		move_rra(stacks);
		n--;
	}
	return ;
}

void	ps_sorting(t_stacks *stacks)
{
	int	len_sa;
	int	next_i;
	int	next_i_distance;


	next_i = 0;
	while (next_i < stacks->len_stack_a)
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
	while(stacks->stack_b)
		move_pa(stacks);
}


//1 sort:
//find next index position as in how many nodes after the first it is on stack_a
//
//if the node position is >=list_len/2 then ra how many nodes after the first and pop to b
//else, rra how many nodes after - len then pop to b.
//pop whole b to a.
//ordered.
//
//Radix:
//- Look at the least significant byte to the most significant byte.
//- at every bit looked, separate the numbers that have the bit i'm currently looking at turned on to the stack_b and then pa+ra.
//- 
