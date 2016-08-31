/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 23:36:10 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/17 14:03:48 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (*(str + index) != '\0')
	{
		ft_putchar(*(str + index));
		index++;
	}
	ft_putchar('\n');
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
	ft_putchar('\n');
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].copy);
		ft_putnbr(par[i].size_param);
		j = 0;
		while (par[i].tab[j] != 0)
		{
			ft_putstr(par[i].tab[j]);
			j++;
		}
		i++;
	}
}
