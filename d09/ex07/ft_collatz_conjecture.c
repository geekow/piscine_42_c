/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 02:37:42 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/12 03:32:31 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	if (base % 2)
		base = (base * 3) + 1;
	else
		base = base / 2;
	return (ft_collatz_conjecture(base) + 1);
}
