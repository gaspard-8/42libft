# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtomas <gtomas@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/05 15:34:08 by gtomas            #+#    #+#              #
#    Updated: 2026/01/06 17:18:56 by gtomas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

# Target binary
NAME = libft.a

# Source files
SRCS =  ./ft_functions/ft_isalpha.c \
		./ft_functions/ft_isalnum.c \
		./ft_functions/ft_isdigit.c \
		./ft_functions/ft_isprint.c \
		./ft_functions/ft_memset.c \
		./ft_functions/ft_strlen.c \
		./ft_functions/ft_isascii.c \
		./ft_functions/ft_bzero.c \
		./ft_functions/ft_memcpy.c \
		./ft_functions/ft_memmove.c \
		./ft_functions/ft_strlcpy.c \
		./ft_functions/ft_strlcat.c \
		./ft_functions/ft_toupper.c \
		./ft_functions/ft_tolower.c \
		./ft_functions/ft_strchr.c \
		./ft_functions/ft_strrchr.c \
		./ft_functions/ft_strncmp.c \
		./ft_functions/ft_memchr.c \
		./ft_functions/ft_memcmp.c \
		./ft_functions/ft_strnstr.c \
		./ft_functions/ft_atoi.c \
		./ft_functions/ft_strdup.c \
		./ft_functions/ft_calloc.c \
		./ft_functions/ft_substr.c \
		./ft_functions/ft_strjoin.c \
		./ft_functions/ft_strtrim.c \
		./ft_functions/ft_split.c \
		./ft_functions/ft_itoa.c \
		./ft_functions/ft_strmapi.c \
		./ft_functions/ft_striteri.c \
		./ft_functions/ft_putchar_fd.c \
		./ft_functions/ft_putstr_fd.c \
		./ft_functions/ft_putendl_fd.c \
		./ft_functions/ft_putnbr_fd.c \
		./ft_functions/ft_lstnew.c \
		./ft_functions/ft_lstadd_front.c \
		./ft_functions/ft_lstsize.c \
		./ft_functions/ft_lstlast.c


# Object files
OBJS = $(SRCS:.c=.o)

# Default target
all: $(NAME)

# Compile the binary
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Compile object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJS)

# Clean all binaries and object files
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re


#
