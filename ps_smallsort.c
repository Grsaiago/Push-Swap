
#include "push_swap.h"

void	ps_smallsort(t_stacks *stacks)
{
	t_psnode	*stack_a;

	stack_a = stacks->stack_a;
	move_sa(stacks);
	if (is_ordered(stacks))
		return ;
	move_ra(stacks);
	if (is_ordered(stacks))
		return ;
	stack_a = stacks->stack_a;
	if (stack_a->next->next->index == 0)
	{
		move_sa(stacks);
		move_rra(stacks);
	}
	else if (stack_a->next->next->index == 1)
		move_ra(stacks);
	else if (stack_a->next->next->index == 2)
		move_sa(stacks);
	return ;
}
