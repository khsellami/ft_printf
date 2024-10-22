NAME = libftprintf.a
FILES = ft_printf.c	\
		print_char.c\
		print_str.c\
		ft_print_digit_decimal.c\
		print_digit_hexa.c\
		print_ptr.c\
		print_unsigned_int.c

OBJS = ${FILES:%.c=%.o}
CC = cc 
CFLAGS=-Wall -Wextra -Werror

all : $(NAME)
$(NAME): ${OBJS}
	ar rc ${NAME} ${OBJS}

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c  $< -o $@
clean:
	rm -f ${OBJS} 
fclean: clean
	rm -f ${NAME}

re: fclean all
