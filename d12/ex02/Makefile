# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 00:38:24 by jjacobi           #+#    #+#              #
#    Updated: 2016/08/24 03:00:20 by jjacobi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_PATH = main.c utilities.c function.c
EXE = ft_tail
OBJ_PATH = $(SRC_PATH:.c=.o)

all: $(EXE)

$(EXE):
	gcc -Wall -Wextra -Werror -c $(SRC_PATH)
	gcc -Wall -Wextra -Werror -o $(EXE) $(OBJ_PATH)

clean:
	rm -f $(OBJ_PATH)

fclean:	clean
	rm -f $(EXE)

re: fclean all
