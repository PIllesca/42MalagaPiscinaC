# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 11:16:21 by pillesca          #+#    #+#              #
#    Updated: 2024/03/27 11:58:02 by pillesca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_puthex.c aux_hex.c ft_printf.c 
LIBFTSRC = libft.a
LIBFTDIR = ./libft

OBJ = $(SRC:.c=.o)

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c
BONUS += ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ_BONUS = $(BONUS:.c=.o)

NAME = ft_printf.a

AR = ar rcs
RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror
MK = make bonus -C
MKC = make clean -C
ARX = ar -x
ARQ = ar -q
RMC = rm *.o

all: $(NAME)

makelibft:
	$(MK) $(LIBFTDIR)
	$(ARX) $(LIBFTDIR)/$(LIBFTSRC)
	$(ARQ) $(NAME) *.o
	$(RMC)

$(NAME): makelibft $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	$(RM) $(OBJ) $(OBJ_BONUS)
	$(MKC) $(LIBFTDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

#bonus: $(OBJ) $(OBJ_BONUS)
#	$(AR) $(NAME) $(OBJ) $(OBJ_BONUS)

#.PHONY: all clean fclean re bonus