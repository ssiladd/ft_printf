NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_putnbr.c \
	  ft_puthex.c \
	  ft_putptr.c \
	  ft_put_print_address.c \
	  ft_putunsigned.c

# OBJ = $(SRC:.c=.o)

all: $(NAME)
# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# $(NAME): $(OBJ)
$(NAME):
	ar rcs $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re