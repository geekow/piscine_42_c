/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 08:17:21 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/12 08:29:47 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int a_temp;
	int b_temp;
	int c_temp;
	int d_temp;

	a_temp = ***a;
	b_temp = *b;
	c_temp = *******c;
	d_temp = ****d;
	***a = var_b;
	*b = var_d;
	*******c = var_a;
	****d = var_c;
}
