# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgroc-de <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/24 13:10:25 by jgroc-de          #+#    #+#              #
#    Updated: 2018/12/24 13:12:40 by jgroc-de         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
#CFLAGS= -Wall -Werror -Wextra -I ../libft
CFLAGS= -Wall -Werror -Wextra -g -I ../libft
LIBFT= -L../libft -lft
NAME= ../skeleton
LIB= ../libft/libft.a
.phony: all clean fclean re

SRC= $(wildcard *.c)
OBJ= $(subst .c,.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ) project.h
	@echo "Compilation de "$(NAME)
	@$(CC) $(OBJ) -o $(NAME) $(CFLAGS) $(LIBFT)

$(OBJ): project.h

$(LIB):
	make -C ../libft

clean:
	@rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all
