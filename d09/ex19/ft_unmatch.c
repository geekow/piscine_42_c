/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 14:58:47 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/12 15:18:06 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unmatch(int *tab, int length)
{
	int i;
	int i_t;
	int temp;

	i = 0;
	while (i < lengh)
	{
		i_t = 0;
		temp = tab[i];
		while (temp != tab[i_t] && (i_t + 1) <= length)
			i_t++;
		if (temp != tab[i_t])
			return (temp);
		i++;
	}
	return (0);
}
