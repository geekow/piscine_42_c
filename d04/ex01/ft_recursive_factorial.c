/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 12:44:50 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/09 18:55:04 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (1 < nb && nb < 13)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else
		return (0);
}
