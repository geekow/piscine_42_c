/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 00:33:51 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/22 16:04:12 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		i;

	i = 1;
	list = begin_list;
	if (list == 0)
		return (0);
	while (list->next != 0)
	{
		list = list->next;
		i++;
	}
	return (i);
}
