/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 00:09:41 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/18 15:03:01 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

void				ft_putchar(char c);
void				ft_putnbr(int nb);
void				ft_putstr(char *str);
int					treat(char **av);
int					ft_atoi(char *str);
int					addition(int one, int two);
int					substraction(int one, int two);
int					multiplication(int one, int two);
int					division(int one, int two);
int					modulo(int one, int two);

typedef	struct		s_opp
{
	char	opp;
	int		(*f)(int, int);
}					t_opp;

#endif
