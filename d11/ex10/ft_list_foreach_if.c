/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 15:48:30 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/22 17:50:42 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	t_list	*list;

	list = begin_list;
	if (list)
	{
		while (list)
		{
			if (!(cmp(list->data, data_ref)))
				f(list->data);
			list = list->next;
		}
	}
}
