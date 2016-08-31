/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 18:25:43 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/09 19:33:52 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_upper_prox(int nb)
{
	int square_root;

	square_root = 0;
	square_root = nb / 2;
	if (nb < 1073741823 && nb > 3)
	{
		while ((square_root * square_root) > nb)
		{
			square_root -= 1;
		}
		return (square_root + 1);
	}
	else
		return (10);
}

int	ft_is_prime(int nb)
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
	upper_bound = ft_sqrt_upper_prox(nb);
	while (counter < upper_bound)
	{
		if (nb % counter == 0)
			return (0);
		counter += 2;
	}
	return (1);
}
