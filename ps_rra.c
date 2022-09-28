#include "push_swap.h"

void	move_rra(t_stacks *stacks)
{
	t_psnode	*last;
	t_psnode	*first;
	t_psnode	*before_last;

	if (!stacks->stack_a)
		return ;
	before_last = stacks->stack_a;
	first = stacks->stack_a;
	last = stacks->stack_a;
	last = ps_lstlast(last);
	while (before_last->next->next)
		before_last = before_last->next;
	before_last->next = NULL;
	last->next = first;
	stacks->stack_a = last;
	write(1, "rra\n", 4);
}
