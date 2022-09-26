#include "./libft/libft.h"

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_psnode
{
	int		value;
	int		index;
	struct s_psnode	*next;
}	t_psnode;

// FUNCTIONS //
t_psnode	*ps_lstnew(int value);
void	ps_lstadd_back(t_psnode **lst, t_psnode *new);
void	ps_lstclear(t_psnode **lst);
void	print_nodes(t_psnode *lst);
void	create_stack_a(int ac, char **av, t_psnode **stack);
void	index_stack(t_psnode **lst, int ac);
#endif
