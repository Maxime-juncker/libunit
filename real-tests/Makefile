MAKEFLAGS += --no-print-directory

NAME = real-test
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
INCLUDES =	-I./atoi/				\
			-I./calloc/				\
			-I./memchr/				\
			-I../framework/includes	\
			-I../libft/includes		\

TEST_SRCS = atoi/00_atoi.c					\
			atoi/02_NULL_test.c				\
			atoi/04_basic_underflow.c		\
			atoi/06_long_underflow.c		\
			atoi/01_basic_test_atoi.c		\
			atoi/03_basic_overflow.c		\
			atoi/05_long_overflow.c			\
			calloc/00_calloc.c				\
			calloc/01_basic_test_calloc.c	\
			calloc/02_bigger_calloc.c		\
			calloc/02_calloc_zero.c			\
			memchr/00_memchr.c				\
			memchr/01_basic_test_memchr.c	\
			memchr/02_not_found.c			\
			memchr/03_eof.c					\
			memchr/04_big_n.c				\

TEST_OBJS = $(TEST_SRCS:.c=.o)
MAIN_OBJ = main.o

TEST_LIB = ../libft/bin/libft.a
FRAMEWORK_LIB = ../framework/bin/libunit.a

# colors
RED = 			\033[31m
GREEN = 		\033[32m
YELLOW = 		\033[33m
RESET = 		\033[0m
BLUE = 			\033[34m
CURSOR_OFF =	\e[?25l
CURSOR_ON = 	\e[?25h

all: lib framework $(NAME)

lib:
	$(MAKE) -C ../libft/

framework:
	$(MAKE) -C ../framework/

$(NAME): $(TEST_OBJS) $(MAIN_OBJ) $(FRAMEWORK_LIB) $(TEST_LIB)
	printf "$(BLUE)compiling: [$$(find . -type f -name "*.o" | wc -l)/$(shell find . -type f -name "*.c" | wc -l)] [OK]\r\n"
	$(CC) $(CFLAGS) $(MAIN_OBJ) $(TEST_OBJS) $(FRAMEWORK_LIB) $(TEST_LIB)  $(INCLUDES) -o $(NAME)
	printf "$(GREEN)$(NAME): success\n"
	printf "\n---------------------$(CURSOR_ON)\n\n"

%.o: %.c $(FRAMEWORK_LIB) $(TEST_LIB)
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

.PHONY: all clean fclean re
.SILENT: