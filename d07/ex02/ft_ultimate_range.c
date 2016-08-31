/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 14:59:53 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/15 23:55:21 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int diff;
	int i;
	int *ptr;

	i = 0;
	diff = max - min;
	if (diff > 0)
	{
		ptr = (int*)malloc(sizeof(int) * diff);
		while (i < diff)
		{
			ptr[i] = min + i;
			i++;
		}
		*range = ptr;
		return (diff);
	}
	else
	{
		*range = NULL;
		return (0);
	}
}
