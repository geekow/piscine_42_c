/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 00:11:56 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/09 18:54:05 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	final_value;
	int	counter;

	final_value = 1;
	counter = 1;
	if (nb == 0)
		return (1);
	if (0 < nb && nb < 13)
	{
		while (counter <= nb)
		{
			final_value = final_value * counter;
			counter++;
		}
		return (final_value);
	}
	else
		return (0);
}
