/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 22:05:54 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/11 22:13:04 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (*(str + index) != '\0')
	{
		ft_putchar(*(str + index));
		index++;
	}
}

void	print_the_hour(int hour)
{
	if (hour == 12)
		ft_putstr("12.00 PM.");
	else if (hour == 0)
		ft_putstr("12.00 AM.");
	else if (hour < 12)
	{
		if (hour < 10)
			ft_putchar(hour + '0');
		else
		{
			ft_putchar((hour / 10) + '0');
			ft_putchar((hour % 10) + '0');
		}
		ft_putstr(".00 AM.");
	}
	else
	{
		ft_putchar(((hour - 12) % 10) + '0');
		ft_putstr(".00 PM.");
	}
}

void	ft_takes_place(int hour)
{
	if (hour <= 24)
	{
		ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
		print_the_hour(hour);
		ft_putstr(" AND ");
		print_the_hour(hour + 1);
	}
}
