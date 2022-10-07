# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 08:33:32 by gsaiago           #+#    #+#              #
#    Updated: 2022/10/07 08:41:51 by gsaiago          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = push_swap.c\
       ps_sa.c\
       ps_sb.c\
       ps_ss.c\
       ps_pa.c\
       ps_pb.c\
       ps_ra.c\
       ps_rb.c\
       ps_rr.c\
       ps_rra.c\
       ps_rrb.c\
       ps_rrr.c\
       ps_lst.c\
       ps_validate.c\
       ps_stacks.c\
       ps_sorting.c\
       ps_sorting_utils.c\
       ps_exit.c\

CC = cc

CFLAGS = -g

LIBFT_PATH = ./libft

LIBFT_LINK = -L$(LIBFT_PATH) -lft

all: $(NAME)

$(NAME): DO_LIBFT
	@$(CC) $(CFLAGS) $(SRCS) $(LIBFT_LINK) -o $(NAME)
	@echo "Push_Swap Done :D"

DO_LIBFT: 
	@make -C $(LIBFT_PATH)

clean:
	@make clean -C $(LIBFT_PATH)
	@rm -rf $(NAME).dSYM
	@rm -f $(NAME)

fclean: clean
	@make fclean -C $(LIBFT_PATH)

re: clean all

lldb: re
	lldb $(NAME) 3 1 2

.PHONY:
	all clean fclean re lldb
