# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/17 19:54:48 by jjacobi           #+#    #+#              #
#    Updated: 2016/08/18 14:52:12 by jjacobi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_PATH = ./srcs/ft_putchar.c
SRC_PATH2 = ./srcs/ft_putstr.c
SRC_PATH3 = ./srcs/ft_strcmp.c
SRC_PATH4 = ./srcs/ft_strlen.c
SRC_PATH5 = ./srcs/ft_swap.c
LIB_NAME = libft.a
O_NAME = ./ft_putchar.o
O_NAME2 = ./ft_putstr.o
O_NAME3 = ./ft_strcmp.o
O_NAME4 = ./ft_strlen.o
O_NAME5 = ./ft_swap.o

all: $(LIB_NAME)

$(LIB_NAME):
	gcc -c $(SRC_PATH) $(SRC_PATH2) $(SRC_PATH3) $(SRC_PATH4) $(SRC_PATH5)
	ar rc $(LIB_NAME) $(O_NAME) $(O_NAME2) $(O_NAME3) $(O_NAME4) $(O_NAME5)

clean:
	rm -f $(O_NAME) $(O_NAME2) $(O_NAME3) $(O_NAME4) $(O_NAME5)
fclean:	clean
	rm -f $(LIB_NAME)

re: fclean all
