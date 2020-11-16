NAME = test
CC = clang
FLAGS = -Wall -Wextra -Werror

SRCS = main.c stack.c
INCLUDES = includes

all:
	$(CC) $(FLAGS) $(SRCS) -I $(INCLUDES) -o $(NAME)

valg:
	valgrind --leak-check=full --show-leak-kinds=all $(NAME)
