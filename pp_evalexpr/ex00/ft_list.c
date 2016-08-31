/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 18:41:44 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/21 12:59:42 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

t_list	*ft_create_elem(int nbr, char sign)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (list)
	{
		list->next = NULL;
		list->nbr = nbr;
		list->sign = sign;
	}
	return (list);
}

void	ft_list_push_back(t_list **begin_list, int nbr, char sign)
{
	t_list		*list;
	t_list		*temp;

	list = ft_create_elem(nbr, sign);
	temp = *begin_list;
	while (temp->next != 0)
		temp = temp->next;
	temp->next = list;
}
