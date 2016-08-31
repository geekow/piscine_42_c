/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 11:45:59 by lduval            #+#    #+#             */
/*   Updated: 2016/08/22 00:27:28 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "colle_2.h"

int		strlenup(char *str, int *x, int *y)
{
	int i;
	int	first_bs;

	i = 0;
	first_bs = 1;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			if (first_bs)
			{
				first_bs = 0;
				*x = i;
			}
			*y = *y + 1;
		}
		i++;
	}
	return (i);
}

void	free_all(t_list *to_free)
{
	t_list	*temp;

	while (to_free)
	{
		temp = to_free->next;
		free(to_free);
		to_free = (t_list*)malloc(sizeof(t_list));
		to_free = temp;
	}
	free(temp);
}

int		result(char *str)
{
	int x;
	int y;
	int size;

	x = 0;
	y = 0;
	size = strlenup(str, &x, &y);
	return (match(str, x, y));
}

int		main(void)
{
	char	*input;
	char	buf;
	t_list	*list;
	t_list	*temp;

	if (read(0, &buf, 1))
		list = creat_list(buf);
	else
	{
		match("", 0, 0);
	}
	while (read(0, &buf, 1))
	{
		temp = creat_list(buf);
		add_elem(list, temp);
	}
	input = li_to_str(list);
	free_all(list);
	(result(input) == 0 ? write(1, "aucune\n", 7) : write(1, "\n", 1));
	return (0);
}
