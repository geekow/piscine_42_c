/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 23:02:39 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/18 18:49:55 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	positive_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while ((i + 1) < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	negative_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while ((i + 1) < length)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (negative_sort(tab, length, f) || positive_sort(tab, length, f))
		return (1);
	else
		return (0);
}
