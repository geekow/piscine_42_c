/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 22:30:24 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/18 00:01:59 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *result;

	i = 0;
	result = (int*)malloc(sizeof(*tab) * (length + 1));
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}
