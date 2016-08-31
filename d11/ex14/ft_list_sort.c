/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 17:04:00 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/22 20:07:14 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list;
	t_list	*cache;
	void	*data;

	list = *begin_list;
	if (list)
	{
		while (list->next != 0)
		{
			cache = list;
			while (cache)
			{
				if (cmp(list->data, cache->data) < 0)
				{
					data = list->data;
					list->data = cache->data;
					cache->data = data;
				}
				cache = cache->next;
			}
			list = list->next;
		}
	}
}
