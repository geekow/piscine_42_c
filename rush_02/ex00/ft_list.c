/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 17:08:41 by lduval            #+#    #+#             */
/*   Updated: 2016/08/21 19:40:58 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*creat_list(char buf)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (list)
	{
		list->next = NULL;
		list->data = buf;
	}
	return (list);
}

void		add_elem(t_list *dest, t_list *to_add)
{
	t_list *temp;

	temp = dest;
	while (temp->next != 0)
		temp = temp->next;
	temp->next = to_add;
}

int			size_list(t_list *src)
{
	t_list	*temp;
	int		i;

	temp = src;
	i = 0;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

char		*li_to_str(t_list *src)
{
	char	*dest;
	t_list	*temp;
	int		j;
	int		i;

	temp = src;
	i = size_list(src);
	j = 0;
	dest = (char*)malloc(sizeof(char) * (i + 1));
	while (j < i)
	{
		dest[j] = temp->data;
		temp = temp->next;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
