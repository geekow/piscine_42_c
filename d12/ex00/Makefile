# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 11:38:58 by jjacobi           #+#    #+#              #
#    Updated: 2016/08/24 02:41:02 by jjacobi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_PATH = main.c
OBJ_PATH = $(SRC_PATH:.c=.o)
EXE = ft_display_file

all: $(EXE)

$(EXE):
	gcc -Wall -Wextra -Werror -c $(SRC_PATH)
	gcc -Wall -Wextra -Werror -o $(EXE) $(OBJ_PATH)

clean:
	rm -f $(OBJ_PATH)

fclean:	clean
	rm -f $(EXE)

re: fclean all
