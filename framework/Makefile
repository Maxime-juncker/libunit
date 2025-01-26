NAME = libunit.a
CFLAGS = -Wall -Wextra -Werror $(INCLUDES_D) -g3
MAKEFLAGS += --no-print-directory

SRC =	utils.c		\
		tester.c	\

OBJ = $(SRC:.c=.o)

OBJ_D = obj/
SRCS_D = src/
BIN_D = bin/
LOG_D = log/
INCLUDES_D = -Iincludes/ -Ilibft/includes/

OBJ := $(addprefix $(OBJ_D), $(OBJ))
SRCS := $(addprefix $(SRCS_D), $(SRCS))

# colors
RESET 			= \033[0m
RED 			= \033[31m
GREEN 			= \033[32m
YELLOW 			= \033[33m
BLUE 			= \033[34m
CURSOR_OFF 		= \e[?25l
CURSOR_ON 		= \e[?25h

RM = rm -fr
ARGS = 1

all: libft $(BIN_D)$(NAME)

.PHONY: libft
libft:
	$(MAKE) -C libft

$(BIN_D)$(NAME): $(OBJ) $(BIN_D)
	printf "$(BLUE)compiling: [$$(ls obj | wc -l)/$(shell ls src | wc -l)] [OK]\r\n"
	ar rcs $(BIN_D)$(NAME) $(OBJ) libft/bin/libft.a
	printf "$(GREEN)$(NAME): success\n"
	printf "\n---------------------$(CURSOR_ON)\n\n"

$(OBJ_D)%.o : $(SRCS_D)%.c includes/libunit.h libft/bin/libft.a | $(OBJ_D)
	printf "$(CURSOR_OFF)$(BLUE)"
	printf "compiling: [$$(ls obj | wc -l)/$(shell ls src | wc -l)]\r"
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	printf "$(RED)clean:\t$(NAME)\n\n"
	$(MAKE) clean -C ./libft
	$(RM) $(OBJ_D)
	printf "$(RED)---------------------\n\n$(RESET)"
	$(MAKE) clog

.PHONY: fclean
fclean:
	$(MAKE) fclean -C ./libft
	$(RM) $(BIN_D)
	printf "$(RED)fclean:\t$(NAME)\n"
	$(MAKE) clean

.PHONY: clog
clog:
	$(RM) $(LOG_D)

.PHONY: re
re:
	$(MAKE) fclean
	$(MAKE) all

# Create directories
$(OBJ_D):
	mkdir -p $(OBJ_D)

$(LOG_D):
	mkdir -p $(LOG_D)

$(BIN_D):
	mkdir -p $(BIN_D)

.PHONY: debug
debug: all $(LOG_D)
	$(BIN_D)./push_swap $(ARGS) > $(LOG_D)$(shell date --iso=seconds).log
	cat $(LOG_D)$(shell date --iso=seconds).log
	echo "$(BLUE)[SAVED]: $(LOG_D)$(shell date --iso=seconds).log"

.SILENT: