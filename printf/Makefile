CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c unsi_putnum.c hesap.c
LIB = libft/
OBJS= $(SRCS:.c=.o)
NAME = libftprintf.a
LIBA= libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIB)
	@cp $(LIB)$(LIBA) .
	@mv $(LIBA) $(NAME)
	ar rcs $(NAME) $(OBJS)


clean:
	rm -f $(OBJS)
	@make -C $(LIB) fclean
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
