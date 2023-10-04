# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 13:04:30 by pillesca          #+#    #+#              #
#    Updated: 2023/10/04 13:54:17 by pillesca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = get_next_line.c get_next_line_utils.c

OBJ = $(SRC:.c=.o)

NAME = get_next_line.a

AR = ar rcs
RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re