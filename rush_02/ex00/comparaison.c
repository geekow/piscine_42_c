/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparaison.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 00:33:41 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/21 22:12:11 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle_2.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int i;
	int tab[10];

	i = 0;
	if (nb < 0)
		ft_putchar('-');
	while (i < 10 && (nb >= 10 || nb <= -10))
	{
		tab[i] = nb % 10;
		nb = nb / 10;
		i++;
	}
	tab[i] = nb;
	while (i >= 0)
	{
		if (tab[i] > 0)
			ft_putchar(tab[i] + '0');
		else
			ft_putchar((tab[i] * -1) + '0');
		i--;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int index;
	int result;

	index = 0;
	while (s1[index] == s2[index])
	{
		index++;
		if (s1[index] == '\0' && s2[index] == '\0')
			return (0);
	}
	result = s1[index] - s2[index];
	return (result);
}

void	print_result(int result, int x, int y)
{
	write(1, "[colle-0", 8);
	ft_putnbr(result);
	write(1, "] [", 3);
	ft_putnbr(x);
	write(1, "] [", 3);
	ft_putnbr(y);
	write(1, "]", 1);
}

int		match(char *src, int x, int y)
{
	int result;
	int i;

	i = 0;
	result = 0;
	while (i < 5)
	{
		if (ft_strcmp(src, colle(x, y, i)) == 0)
		{
			if (result > 0)
				write(1, " || ", 4);
			print_result(i, x, y);
			result += 1;
		}
		i++;
	}
	return (result);
}
