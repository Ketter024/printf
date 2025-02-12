# Nom de l'exécutable
NAME = libftprintf.a

# Fichiers sources
SRC = ft_format.c ft_printchar.c ft_printf.c \
ft_printhex.c ft_printnb.c ft_printstr.c ft_putchar_fd.c \
ft_printptr.c

# Fichier objet généré par chaque source
OBJ = $(SRC:.c=.o)

# Options de compilation
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Règles de compilation
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

# Règles pour tester avec le main
main: $(NAME)
	$(CC) $(CFLAGS) main.c $(NAME) -o test_ftprintf

run: main
	./test_ftprintf

.PHONY: all clean fclean re main run
