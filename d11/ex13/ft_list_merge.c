/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 16:43:52 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/22 20:03:30 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*list;

	list = *begin_list1;
	if (list)
	{
		while (list->next != 0)
			list = list->next;
		list->next = begin_list2;
	}
	else
		*begin_list1 = begin_list2;
}
