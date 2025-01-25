NAME = test
CFLAGS = -Wall -Wextra -Werror $(INCLUDES_D) -g3
MAKEFLAGS += --no-print-directory

SRCS =	main.c						\

STRLEN_SRC =	00_launcher.c		\
				01_basic_test.c		\
				02_NULL_test.c		\
				ft_strlen_test.c	\

OBJ := $(SRCS:.c=.o)
OBJ_STR := $(STRLEN_SRC:.c=.o)

OBJ_D = obj/
SRCS_D = tests/
BIN_D = bin/
LOG_D = log/
INCLUDES_D = -Iincludes/ -Iframework/includes/ -Iframework/libft/includes/

OBJ := $(addprefix $(OBJ_D), $(OBJ))
SRCS := $(addprefix $(SRCS_D), $(SRCS))
STRLEN_SRC := $(addprefix $(SRCS_D)strlen/, $(STRLEN_SRC))

SRCS += $(STRLEN_SRC)

# colors
RESET 			= \033[0m
RED 			= \033[31m
GREEN 			= \033[32m
YELLOW 			= \033[33m
BLUE 			= \033[34m
CURSOR_OFF 		= \e[?25l
CURSOR_ON 		= \e[?25h

RM = rm -fr

all: libunit $(BIN_D)$(NAME)

tmp:
	echo "$(OBJ)"
	echo "$(SRCS)"
	echo "$(SRCS_D)"

.PHONY: libunit
libunit:
	$(MAKE) -C ./framework

$(BIN_D)$(NAME): $(BIN_D)
	printf "$(BLUE)compiling: [$$(ls obj | wc -l)/$(shell ls $(SRCS_D) | wc -l)] [OK]\r\n"
	$(CC) $(CFLAGS) $(SRCS) framework/bin/libunit.a framework/libft/bin/libft.a -o $(BIN_D)$(NAME)
	printf "$(GREEN)$(NAME): success\n"
	printf "\n---------------------$(CURSOR_ON)\n\n"

$(OBJ_D)%.o : $(SRCS_D)%.c framework/bin/libunit.a | $(OBJ_D)
	printf "$(CURSOR_OFF)$(BLUE)"
	# printf "compiling: [$$(ls obj | wc -l)/$(shell ls $(SRCS_D) | wc -l)]\r"
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	printf "$(RED)clean:\t$(NAME)\n\n"
	$(RM) $(OBJ_D)
	$(MAKE) clean -C ./framework
	printf "$(RED)---------------------\n\n$(RESET)"
	$(MAKE) clog

.PHONY: fclean
fclean:
	$(MAKE) fclean -C ./framework
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

.SILENT: