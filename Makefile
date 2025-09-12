NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -fPIE
SRC = ft_printf.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_putnbr.c \
	  ft_puthex.c \
	  ft_put_print_address.c \
	  ft_putnbr_unsigned.c

OBJ = $(SRC:.c=.o)

all: $(NAME)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re