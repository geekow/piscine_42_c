/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 23:46:05 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/22 17:28:16 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*previous;
	t_list	*current;
	t_list	*next;

	current = *begin_list;
	previous = 0;
	if (current != 0)
	{
		while (current->next != 0)
		{
			next = current->next;
			current->next = previous;
			previous = current;
			current = next;
		}
		if (previous)
			current->next = previous;
		*begin_list = current;
	}
}
