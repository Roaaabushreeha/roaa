CC = cc 

CFLAGS = -Wall -Wextra -Werror

PWSRCS = push_swap.c pushs.c rotate.c rrotate.c sorting.c swap.c utils.c helping.c error.c create_stack.c radix.c 

PWOBJ = $(PWSRCS:.c=.o)

LIBFT_DIR = ../libft


LIBFT_A = ../libft/libft.a

NAME = push_swap



all: $(LIBFT_A) $(NAME)

$(NAME) : $(PWOBJ)
	$(CC) $(CFLAGS) -o $@ $^ -L $(LIBFT_DIR) -lft

$(LIBFT_A) : 
	make -C $(LIBFT_DIR)
clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	rm -rf $(PWOBJ)

fclean : clean
	$(MAKE) fclean -C  $(LIBFT_DIR)
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re
