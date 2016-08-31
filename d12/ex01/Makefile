# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 13:22:43 by jjacobi           #+#    #+#              #
#    Updated: 2016/08/24 02:43:29 by jjacobi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_PATH = main.c
EXE = ft_cat
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
