/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:03:24 by gsaiago           #+#    #+#             */
/*   Updated: 2022/10/03 17:31:26 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_psnode
{
	int				value;
	int				index;
	struct s_psnode	*next;
}	t_psnode;

typedef struct s_stacks
{
	t_psnode	*stack_a;
	t_psnode	*stack_b;
	int			len_stack_a;
}	t_stacks;

// SORT FUNCTIONS //
void			ps_three_sort(t_stacks *stack);
void			ps_five_sort(t_stacks *stacks);
void			ps_radix(t_stacks *stacks);
// STACK FUNCTIONS //
t_psnode		*ps_lstnew(int value);
t_psnode		*ps_lstlast(t_psnode *lst);
void			ps_lstadd_front(t_psnode **lst, t_psnode *new);
void			ps_lstadd_back(t_psnode **lst, t_psnode *new);
int				ps_lstsize(t_psnode *lst);
void			print_nodes(t_psnode *lst);
void			create_stack_a(int ac, char **av, t_psnode **stack);
void			index_stack(t_psnode **lst, int ac);
// AUX FUNCTIONS //
int				find_highest_bit(int high_numb);
int				is_ordered(t_stacks *stacks);
unsigned int	find_next_i(t_stacks *stacks, unsigned int next_i);
// VALIDATION FUNCTIONS //
int				not_valid_args(int ac, char **av);
int				not_int_range(int ac, char **av);
int				if_not_numb(int ac, char **av);
int				no_duplicates(int ac, char **av);
int				compare_to_av(int ac, int x, char *ref, char **av);
// MOVES //
void			core_sa(t_stacks *stacks);
void			move_sa(t_stacks *stacks);
void			core_sb(t_stacks *stacks);
void			move_sb(t_stacks *stacks);
void			move_ss(t_stacks *stacks);
void			move_pa(t_stacks *stacks);
void			move_pb(t_stacks *stacks);
void			move_ra(t_stacks *stacks);
void			move_rb(t_stacks *stacks);
void			move_rr(t_stacks *stacks);
void			move_rra(t_stacks *stacks);
void			move_rrb(t_stacks *stacks);
void			move_rrr(t_stacks *stacks);
void			rra_n_times(t_stacks *stacks, int n);
void			ra_n_times(t_stacks *stacks, int n);
// EXIT //
void			exit_func(t_stacks *stacks);
void			ps_lstclear(t_psnode **lst);

#endif
