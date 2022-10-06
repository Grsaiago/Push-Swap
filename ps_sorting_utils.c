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
	t_psnode		*stack_a;
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
