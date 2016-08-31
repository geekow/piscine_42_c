/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 14:05:34 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/15 23:31:41 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		diff;
	int		*ptr;

	i = 0;
	diff = max - min;
	if (diff > 0)
	{
		ptr = (int *)malloc(sizeof(int) * diff);
		while (i < diff)
		{
			ptr[i] = min + i;
			i++;
		}
		return (ptr);
	}
	else
		return (NULL);
}
