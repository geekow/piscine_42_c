/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 11:27:13 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/22 16:43:33 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;

	list = ft_create_elem(data);
	list->next = *begin_list;
	*begin_list = list;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list		*list;
	int			i;

	i = 0;
	if (ac > 0)
		list = ft_create_elem(av[i]);
	else
		return (0);
	while (++i < ac)
		ft_list_push_front(&list, av[i]);
	return (list);
}
