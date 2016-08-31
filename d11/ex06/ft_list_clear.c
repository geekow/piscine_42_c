/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 13:33:49 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/22 17:00:37 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*delete_a_struct_start(t_list *list)
{
	t_list	*new_start;

	new_start = list->next;
	free(list);
	return (new_start);
}

void	ft_list_clear(t_list **begin_list)
{
	t_list		*list;

	list = *begin_list;
	while (list)
		list = delete_a_struct_start(list);
	free(list);
	*begin_list = NULL;
}
