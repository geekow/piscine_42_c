/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_str_to_list.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 18:36:00 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/21 12:24:05 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

t_list	*translate_str_to_list(char *str)
{
	t_list		*beg_list;
	t_list		*list;
	int			i;

	beg_list = ft_create_elem(0, '\0');
	list = beg_list;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '(' || str[i] == ')' || str[i] == '+' || str[i] == '-'
			|| str[i] == '/' || str[i] == '*' || str[i] == '%')
			ft_list_push_back(&beg_list, 0, str[i]);
		else
		{
			ft_list_push_back(&beg_list, ft_atoi(str + i), '\0');
			while (str[i] >= '0' && str[i] <= '9')
				i++;
			i--;
		}
		i++;
	}
	return (beg_list);
}
