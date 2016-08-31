/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 19:37:33 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/09 19:36:51 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_upper_prox_bis(int nb)
{
	int square_root;

	square_root = nb / 2;
	if (nb < 2147483646 && nb > 3)
	{
		while ((square_root * square_root) > nb)
		{
			square_root -= 1;
		}
		return (square_root + 1);
	}
	else
		return (46341);
}

int	ft_is_prime_bis(int nb)
{
	int counter;
	int upper_bound;

	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	counter = 3;
	upper_bound = ft_sqrt_upper_prox_bis(nb);
	while (counter < upper_bound)
	{
		if (nb % counter == 0)
			return (0);
		counter += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb <= 2147483647)
	{
		if (ft_is_prime_bis(nb) == 1)
			return (nb);
		nb++;
	}
	return (-1);
}
