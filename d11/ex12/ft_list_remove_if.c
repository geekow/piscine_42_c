/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 16:15:31 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/22 19:51:01 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*next_valid(t_list *list, void *data_ref, int (*cmp)())
{
	t_list	*cache;

	while (list)
	{
		if (cmp(data_ref, list->data) != 0)
			return (list);
		cache = list->next;
		free(list);
		list = cache;
	}
	return (0);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list;

	*begin_list = next_valid(*begin_list, data_ref, cmp);
	list = *begin_list;
	while (list)
	{
		list->next = next_valid(list->next, data_ref, cmp);
		list = list->next;
	}
}
