/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 18:15:59 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/21 12:50:56 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	struct s_list	*next;
	int				nbr;
	char			sign;
}				t_list;

t_list			*ft_create_elem(int nbr, char sign);
t_list			*translate_str_to_list(char *str);
int				repeat(t_list list, char value);
void			ft_list_push_back(t_list **begin_list, int nbr, char sign);
int				eval_expr(char *str);
void			treat(t_list **begin_list);
void			ft_putnbr(int nb);
void			ft_putchar(char c);
int				ft_atoi(char *str);
int				addition(int one, int two);
int				substraction(int one, int two);
int				multiplication(int one, int two);
int				division(int one, int two);
int				modulo(int one, int two);

#endif
