#include "push_swap.h"

void	move_pb(t_stacks *stacks)
{
	t_psnode	*pop;
	t_psnode	*aux;

	pop = stacks->stack_a;
	aux = stacks->stack_a;
	if (!pop)
		return ;
	while (pop->next)
		pop = pop->next;
	while (aux->next->next)
		aux = aux->next;
	aux->next = NULL;
	ps_lstadd_back(&stacks->stack_b, pop);
	write(1, "pb\n", 3);
}
