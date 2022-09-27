
#include "push_swap.h"

void	move_rrr(t_stacks *stacks)
{
	t_psnode	*last;
	t_psnode	*first;
	t_psnode	*second;

	second = stacks->stack_a->next;
	first = stacks->stack_a;
	last = stacks->stack_a;
	last = ps_lstlast(last);
	last->next = stacks->stack_a;
	first->next = NULL;
	stacks->stack_a = second;
	second = stacks->stack_b->next;
	first = stacks->stack_b;
	last = stacks->stack_b;
	last = ps_lstlast(last);
	last->next = stacks->stack_b;
	first->next = NULL;
	stacks->stack_b = second;
	write(1, "rrr\n", 4);
}
