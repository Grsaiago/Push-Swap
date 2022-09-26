
#include "push_swap.h"

int main(int argc, char **argv)
{
	t_psnode	*stack_a;
	
	//check_params(argc, argv);
	stack_a = NULL;
	create_stack_a(argc, argv, &stack_a);
	print_nodes(stack_a);
	ps_lstclear(&stack_a);
}
