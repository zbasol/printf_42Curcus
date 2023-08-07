SRCS =	ft_formats.c \
		ft_print_addr.c \
		ft_print_hex.c \
		ft_print_percent.c \
		ft_printf.c \
		ft_putchar.c\
		ft_putnbr_u.c\
		ft_putnbr.c\
		ft_putstr.c\
		
OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

$(NAME): $(OBJS)
			ar -rc $(NAME) $(OBJS)

clean:
			${RM} ${OBJS}

fclean: clean
			${RM} ${NAME}

re: fclean all

.PHONY : all clean fclean re