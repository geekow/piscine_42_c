/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 18:21:53 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/21 13:36:48 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		calculation(int one, char two, int three)
{
	if (two == '+')
		return (addition(one, three));
	else if (two == '-')
		return (substraction(one, three));
	else if (two == '/')
		return (division(one, three));
	else if (two == '*')
		return (multiplication(one, three));
	else if (two == '%')
		return (modulo(one, three));
	else
		return (0);
}

void	treat(t_list **begin_list)
{
	t_list	*list;
	t_list	*before;
	t_list	*after;
	t_list	*sign;

	before = *begin_list;
	list = before->next;
	while (list->next != 0)
	{
		sign = list->next;
		after = sign->next;
		if (list->sign == '\0' && (sign->sign == '*' || sign->sign == '/'
					|| sign->sign == '%') && after->sign == '\0')
		{
			list->nbr = calculation(list->nbr, sign->sign, after->nbr);
			list->next = after->next;
			list = *begin_list;
		}
		else if (list->sign == '\0' && (sign->sign == '-' || sign->sign == '+')
					&& after->sign == '\0')
		{
			list->nbr = calculation(list->nbr, sign->sign, after->nbr);
			list->next = after->next;
			list = *begin_list;
		}
		before = list;
		list = list->next;
	}
}
