NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

INCS = ./includes/ft.h

OBJS = ${SRCS:.c=.o}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@ -I ${INCS}

all : ${NAME}
		ar rsc ${NAME} ${OBJS}

${NAME} : ${OBJS}

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}	

re : fclean all

.PHONY:	all	clean	fclean	re
