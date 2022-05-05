NAME = do-op

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ./srcs/main.c ./srcs/calc.c ./srcs/ft_print.c

INCS = ./includes

OBJS = ${SRCS:.c=.o}

all	: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@ -I ${INCS}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} $^ -o $@ -I ${INCS}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re : fclean all

.PHONY:	all	clean	fclean	re