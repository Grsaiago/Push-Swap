/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:03:24 by gsaiago           #+#    #+#             */
/*   Updated: 2022/09/26 16:24:18 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_psnode
{
	int		value;
	int		index;
	struct s_psnode	*next;
}	t_psnode;

typedef struct s_stacks
{
	t_psnode	*stack_a;
	t_psnode	*stack_b;
	int		len_stack_a;
}	t_stacks;

// FUNCTIONS //
t_psnode	*ps_lstnew(int value);
void		ps_lstadd_front(t_psnode **lst, t_psnode *new);
void		ps_lstclear(t_psnode **lst);
int		ps_lstsize(t_psnode *lst);
t_psnode	*ps_lstlast(t_psnode *lst);
void		print_nodes(t_psnode *lst);
void		create_stack_a(int ac, char **av, t_psnode **stack);
void		index_stack(t_psnode **lst, int ac);
// MOVES //
void	core_sa(t_stacks *stacks);
void	move_sa(t_stacks *stacks);
void	core_sb(t_stacks *stacks);
void	move_sb(t_stacks *stacks);
void	move_ss(t_stacks *stacks);
void	move_pa(t_stacks *stacks);
void	move_pb(t_stacks *stacks);
void	move_ra(t_stacks *stacks);
void	move_rb(t_stacks *stacks);
void	move_rr(t_stacks *stacks);
void	move_rra(t_stacks *stacks);
void	move_rrb(t_stacks *stacks);
void	move_rrr(t_stacks *stacks);
void	ps_sorting(t_stacks *stacks);
void	rra_n_times(t_stacks *stacks, int n);
void	ra_n_times(t_stacks *stacks, int n);
int	is_ordered(t_stacks *stacks);
unsigned int	find_next_i(t_stacks *stacks, unsigned int next_i);

#endif
