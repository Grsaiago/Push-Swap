NAME = push_swap

SRCS = push_swap.c\
       utils_ps.c\
       ps_sa.c\
       ps_sb.c\
       ps_ss.c\
       ps_pa.c\

CC = cc

CFLAGS = -g

LIBFT_PATH = ./libft

LIBFT_LINK = -L$(LIBFT_PATH) -lft

all: $(NAME)

$(NAME):
	@$(DO_LIBFT)
	@$(CC) $(CFLAGS) $(SRCS) $(LIBFT_LINK) -o $(NAME)
	@echo "Push_Swap Done :D"

$(DO_LIBFT):
	@make -C $(LIBFT_PATH)

clean:
	@make clean -C $(LIBFT_PATH)
	@rm -rf $(NAME).dSYM
	@rm $(NAME)

re: clean all

lldb: re
	lldb $(NAME) 1 2 3 4

.PHONY:
	all clean re lldb

