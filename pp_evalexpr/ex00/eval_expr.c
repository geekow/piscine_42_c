/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 17:52:49 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/21 13:38:01 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		translate_list_to_int(t_list **begin_list)
{
	int		result;
	t_list	*list;

	list = *begin_list;
	if (list)
		result = list->nbr;
	else
		result = 0;
	return (result);
}

int		eval_expr(char *str)
{
	t_list		*begin_list;
	int			result;

	begin_list = translate_str_to_list(str);
	treat(&begin_list);
	result = translate_list_to_int(&begin_list);
	return (result);
}
