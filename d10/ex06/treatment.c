/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verification.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 00:32:18 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/18 17:00:50 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

t_opp	g_opptab[] =
{
	{'+', &addition},
	{'-', &substraction},
	{'*', &multiplication},
	{'/', &division},
	{'%', &modulo},
	{'0', 0},
};

t_opp	check_operator(char c)
{
	int		i;

	i = 0;
	while (g_opptab[i].opp != '0')
	{
		if (g_opptab[i].opp == c)
		{
			return (g_opptab[i]);
		}
		i++;
	}
	ft_putnbr(0);
	ft_putchar('\n');
	return (g_opptab[5]);
}

int		treat(char **av)
{
	t_opp	f_opp;
	int		one;
	int		two;
	int		result;

	f_opp = check_operator(av[2][0]);
	if (f_opp.opp == '0')
		return (1);
	one = ft_atoi(av[1]);
	two = ft_atoi(av[3]);
	if (f_opp.opp == '/' && two == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	else if (f_opp.opp == '%' && two == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	result = f_opp.f(one, two);
	ft_putnbr(result);
	ft_putchar('\n');
	return (0);
}
