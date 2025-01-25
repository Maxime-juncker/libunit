# Variables de configuration
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

# Nom de l'exécutable final
NAME = unit_tests

# Sous-dossiers pour chaque test
SUBDIRS = atoi calloc memchr

# Fichiers sources pour chaque sous-dossier
SRC_ATOI = 00_launcher.c 01_basic_test.c 02_NULL_test.c
SRC_CALLOC = 00_launcher.c 01_basic_test.c 02_bigger_test.c
SRC_MEMCHR = 00_launcher.c 01_basic_test.c

# Conversion des fichiers sources en chemins complets
SRC_ATOI_D := $(addprefix atoi/, $(SRC_ATOI))
SRC_CALLOC_D := $(addprefix calloc/, $(SRC_CALLOC))
SRC_MEMCHR_D := $(addprefix memchr/, $(SRC_MEMCHR))

# Liste de tous les fichiers source
SRCS = $(SRC_ATOI_D) $(SRC_CALLOC_D) $(SRC_MEMCHR_D)

# Conversion des fichiers .c en fichiers .o
OBJ = $(SRCS:.c=.o)

# Répertoire des fichiers objets
OBJ_DIR = obj

# Règle principale pour générer l'exécutable
all: $(NAME)

# Génération de l'exécutable final
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# Règle pour compiler les fichiers .c en fichiers .o dans le répertoire obj/{subdir}/
$(OBJ_DIR)/%/%.o: %/%.c
	@mkdir -p $(OBJ_DIR)/$(dir $@)  # Crée le répertoire si nécessaire
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage global
.PHONY: clean fclean
clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

# Règle pour relancer tout
re: fclean all
