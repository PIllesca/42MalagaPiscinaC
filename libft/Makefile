# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 11:16:21 by pillesca          #+#    #+#              #
#    Updated: 2023/09/25 13:14:56 by pillesca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c
SRC += ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c
SRC += ft_memmove.c ft_memset.c ft_strchr.c ft_strlen.c ft_strlcat.c 
SRC += ft_strlcpy.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c
SRC += ft_toupper.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c
SRC += ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c
SRC += ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c
BONUS += ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ_BONUS = $(BONUS:.c=.o)

NAME = libft.a

AR = ar rcs
RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJ) $(OBJ_BONUS)
	$(AR) $(NAME) $(OBJ) $(OBJ_BONUS)

#.PHONY: all clean fclean re bonus