/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 21:30:01 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/21 19:54:33 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle_2.h"

t_champ	g_tab[] =
{
	{0, 'o', 'o', 'o', 'o', '-', '|'},
	{1, '/', '\\', '\\', '/', '*', '*'},
	{2, 'A', 'A', 'C', 'C', 'B', 'B'},
	{3, 'A', 'C', 'A', 'C', 'B', 'B'},
	{4, 'A', 'C', 'C', 'A', 'B', 'B'},
};

char	put_the_right_char(int *counter, int x, int y, int colle_nbr)
{
	if (counter[0] == 1 && counter[1] == 1)
		return (g_tab[colle_nbr].corner1);
	else if (counter[0] == x && counter[1] == 1)
		return (g_tab[colle_nbr].corner2);
	else if (counter[0] == 1 && counter[1] == y)
		return (g_tab[colle_nbr].corner3);
	else if (counter[0] == x && counter[1] == y)
		return (g_tab[colle_nbr].corner4);
	else if (1 < counter[1] && counter[1] < y)
	{
		if (counter[0] == 1 || counter[0] == x)
			return (g_tab[colle_nbr].column);
		else
			return (' ');
	}
	else if ((counter[1] == 1 || counter[1] == y)
			&& (counter[0] > 1 && counter[0] < x))
		return (g_tab[colle_nbr].line);
	return (-1);
}

/*
** counter[0] is equal to counter_x
** counter[1] is equal to counter_y
*/

char	*colle(int x, int y, int colle_nbr)
{
	int		counter[2];
	char	*str;
	int		i;

	i = 0;
	counter[0] = 1;
	counter[1] = 1;
	str = (char*)malloc(sizeof(char) * ((x * y) + y));
	while (counter[1] <= y && x > 0)
	{
		str[i++] = put_the_right_char(counter, x, y, colle_nbr);
		if (counter[0] == x)
		{
			counter[1]++;
			str[i++] = '\n';
			counter[0] = 0;
		}
		counter[0]++;
	}
	return (str);
}
