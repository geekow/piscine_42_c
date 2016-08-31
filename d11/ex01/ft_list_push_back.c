/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 21:09:13 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/22 15:49:35 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list		*temp;

	temp = *begin_list;
	if (*begin_list == 0)
		*begin_list = ft_create_elem(data);
	else
	{
		while (temp->next != 0)
			temp = temp->next;
		temp->next = ft_create_elem(data);
	}
}
