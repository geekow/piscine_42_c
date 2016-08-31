/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 10:51:50 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/06 16:38:38 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	put_the_right_char(int counter_x, int counter_y, int x, int y)
{
	if (counter_y == 1 || counter_y == y)
	{
		if (counter_x == 1 || counter_x == x)
			ft_putchar('o');
		if (counter_x > 1 && counter_x < x)
			ft_putchar('-');
	}
	if (1 < counter_y && counter_y < y)
	{
		if (counter_x == 1 || counter_x == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
	if (counter_x == x)
		ft_putchar('\n');
}

void	colle(int x, int y)
{
	int	counter_x;
	int counter_y;

	counter_x = 1;
	counter_y = 1;
	while (counter_y <= y && x > 0)
	{
		put_the_right_char(counter_x, counter_y, x, y);
		if (counter_x == x)
		{
			counter_y++;
			counter_x = 0;
		}
		counter_x++;
	}
}
