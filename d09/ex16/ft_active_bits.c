/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 16:19:50 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/12 16:31:30 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_iterative_power(int nb, int power)
{
	int counter;
	int final_value;

	final_value = 1;
	counter = 0;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (counter < power)
	{
		final_value = final_value * nb;
		counter++;
	}
	return (final_value);
}

unsigned int	ft_active_bits(int value)
{
	unsigned int i;

	i = 0;
	if (value > 0)
		while (value > (ft_iterative_power(2, i) / 2 - 1))
			i++;
	else
		while (value < (ft_iterative_power(2, i) / 2))
			i++;
	return (i);
}
