# Define the output name (e.g., your static library or binary)
NAME = libft.a

# Source files
SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c ft_strlen.c ft_isascii.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c
# Object files derived from source files
OBJ = $(SRC:.c=.o)

# Compiler and compiler flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Default target (builds the final output)
all: $(NAME)

# Pattern rule for compiling source files to object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Build the final output (static library)
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Clean up object files
clean:
	rm -f $(OBJ)

# Clean everything, including the final output
fclean: clean
	rm -f $(NAME)

# Phony target to avoid conflicts with files named "clean" or "fclean"
.PHONY: clean fclean

# Default target
.DEFAULT_GOAL := all
