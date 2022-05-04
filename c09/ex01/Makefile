NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

INCS = ./includes

OBJS = ${SRCS:.c=.o}

all	: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@ -I ${INCS}

${NAME} : ${OBJS}
	ar rsc $@ ${OBJS}

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}	

re : fclean all

.PHONY:	all	clean	fclean	re
