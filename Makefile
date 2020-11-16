NAME = test
CC = clang
FLAGS = -Wall -Wextra -Werror
VALG_FLAGS = --leak-check=full --show-leak-kinds=all

SRCS = main.c stack.c swap.c
INCLUDES = includes

all:
	$(CC) $(FLAGS) $(SRCS) -I $(INCLUDES) -o $(NAME)

valg:
	valgrind ./$(NAME)
