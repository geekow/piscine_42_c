/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 00:37:40 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/22 16:11:37 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list		*list;

	list = begin_list;
	if (begin_list == 0)
		return (begin_list);
	while (list->next != 0)
		list = list->next;
	return (list);
}
