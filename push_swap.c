
#include "push_swap.h"

void	create_stack_a(int ac, char **av, t_psnode **stack)
{
	int		i;
	t_psnode	*node;

	i = 0;
	while (++i < ac)
	{
		node = ps_lstnew(ft_atoi(av[i]));
		ps_lstadd_back(stack, node);
	}

}
int main(int argc, char **argv)
{
	t_psnode	*stack_a;

	stack_a = NULL;
	create_stack_a(argc, argv, &stack_a);
	ps_lstclear(&stack_a);
}
