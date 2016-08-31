# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/17 19:54:48 by jjacobi           #+#    #+#              #
#    Updated: 2016/08/21 22:25:26 by jjacobi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_PATH = colle00.c comparaison.c ft_list.c main.c
EXE = colle-2

all: $(EXE)

$(EXE):
	gcc -Wall -Wextra -Werror -o $(EXE) $(SRC_PATH)

clean:
	rm -f $(EXE)
fclean:	clean
	@rm -f $(EXE)

re: fclean all
