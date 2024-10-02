# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/30 11:47:36 by pillesca          #+#    #+#              #
#    Updated: 2024/09/30 11:57:05 by pillesca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = client.c server.c utils.c

OBJ = $(SRC:.c=.o)

NAME = minitalk

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o client client.o utils.o
	$(CC) $(CFLAGS) -o server server.o utils.o

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f client server

re: fclean all

.PHONY: all clean fclean re