# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achavy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/22 21:43:02 by achavy            #+#    #+#              #
#    Updated: 2017/10/24 03:21:18 by achavy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	ft_printf

SRC =	main.c \
		ft_printf.c

TMP =	$(SRC:.c=.o)

LIB = libft/libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

.PHONY : all clean fclean re

all : $(NAME)

$(NAME): $(LIB) $(SRC)
	$(CC) $(FLAGS) -c $(SRC) -I . -I ./libft
	$(CC) $(FLAGS) $(TMP) -o $(NAME)  -L ./libft -lft -I .

$(LIB):
	make -C libft

clean:
	rm -f $(TMP)
	make -C libft clean


fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re : fclean all
