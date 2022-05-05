CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

NAME = bsq
SOURCES = ft_split.c ft_strdup.c ft_string.c reader.c checker.c getter.c builder.c finder.c finder_helper.c printer.c main.c check_excute.c check_helper.c
SRCS = $(addprefix $(DIR_S)/, $(SOURCES))
OBJS = $(SRCS:.c=.o)
DIR_S = ./srcs
DIR_I = ./includes

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -I $(DIR_I)

$(DIR_S)/%.o : $(DIR_S)/%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(DIR_I)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re