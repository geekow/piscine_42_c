# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/20 12:02:10 by jjacobi           #+#    #+#              #
#    Updated: 2016/08/21 12:50:01 by jjacobi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EX_NAME = eval_expr
C_PATHS = main.c utilities.c eval_expr.c treat.c translate_str_to_list.c \
		  ft_list.c operators.c

all : $(EX_NAME)

$(EX_NAME):
	gcc -Wall -Werror -Wextra -o $(EX_NAME) $(C_PATHS)

clean:
	rm -f $(EX_NAME)

re : clean all
