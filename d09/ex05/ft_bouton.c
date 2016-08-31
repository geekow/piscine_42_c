/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 00:29:14 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/12 00:34:03 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_bouton(int i, int j, int k)
{
	if (i <= j && j <= k)
		return (j);
	if (j <= i && i <= k)
		return (i);
	if (i <= k && k <= j)
		return (k);
	if (k <= j && j <= i)
		return (j);
	if (k <= i && i <= j)
		return (i);
	if (j <= k && k <= i)
		return (k);
	return (0);
}
