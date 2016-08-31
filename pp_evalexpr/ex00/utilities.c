/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 11:52:00 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/20 19:28:52 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

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

int		result_table(char charact)
{
	if ('0' <= charact && charact <= '9')
		return (1);
	else if (charact == '-')
		return (-1);
	else if (charact == '+')
		return (3);
	else if (charact == '\r' || charact == '\n' || charact == ' ' ||
			charact == '\t' || charact == '\v' || charact == '\f')
		return (2);
	else if (charact == '\0')
		return (-2);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int index;
	int multiplicator;
	int condition;
	int result;

	condition = result_table(str[0]);
	index = 0;
	multiplicator = 1;
	result = 0;
	while (condition == 2)
	{
		condition = result_table(str[++index]);
	}
	if (condition == -1 || condition == 3)
	{
		if (condition == -1)
			multiplicator = -1;
		condition = result_table(str[++index]);
	}
	while (condition == 1)
	{
		result = result * 10 + (str[index] - '0');
		condition = result_table(str[++index]);
	}
	return (multiplicator * result);
}
