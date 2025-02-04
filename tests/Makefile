MAKEFLAGS += --no-print-directory

NAME = tests
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3
INCLUDES =	-I../includes			\
			-I../libft/includes		\

TEST_SRCS = showcase/00_launcher.c			\
			showcase/01_ok_test.c			\
			showcase/02_ko_test.c			\
			showcase/03_segfault_test.c		\
			showcase/04_bus_err.c			\
			showcase/create_bus_error.c		\

TEST_OBJS = $(TEST_SRCS:.c=.o)
MAIN_OBJ = main.o

FRAMEWORK_LIB = ../bin/libunit.a
LIBFT = ../libft/bin/libft.a

# colors
RED = 			\033[31m
GREEN = 		\033[32m
YELLOW = 		\033[33m
RESET = 		\033[0m
BLUE = 			\033[34m
CURSOR_OFF =	\e[?25l
CURSOR_ON = 	\e[?25h

all: $(NAME)

$(NAME): $(TEST_OBJS) $(MAIN_OBJ)
	printf "$(BLUE)compiling: [$$(find . -type f -name "*.o" | wc -l)/$(shell find . -type f -name "*.c" | wc -l)] [OK]\r\n"
	$(CC) $(CFLAGS) $(MAIN_OBJ) $(TEST_OBJS) $(FRAMEWORK_LIB) $(LIBFT) $(INCLUDES) -o $(NAME)
	printf "$(GREEN)$(NAME): success\n"
	printf "\n---------------------$(CURSOR_ON)\n\n"

%.o: %.c
	printf "$(CURSOR_OFF)$(BLUE)"
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	printf "compiling: [$$(find . -type f -name "*.o" | wc -l)/$(shell find . -type f -name "*.c" | wc -l)]\r"

clean:
	$(MAKE) clean -C ../libft
	$(MAKE) clean -C ../framework
	rm -f $(MAIN_OBJ) $(TEST_OBJS)

fclean: clean
	$(MAKE) fclean -C ../libft
	$(MAKE) fclean -C ../framework
	rm -f $(NAME)

re: fclean all

test: all
	./$(NAME)

.PHONY: all clean fclean re bonus
.SILENT: