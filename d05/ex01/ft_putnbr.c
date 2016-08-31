/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 13:18:54 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/10 16:42:09 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int i;
	int tab[10];

	i = 0;
	if (nb < 0)
		ft_putchar('-');
	while (i < 10 && (nb >= 10 || nb <= -10))
	{
		tab[i] = nb % 10;
		nb = nb / 10;
		i++;
	}
	tab[i] = nb;
	while (i >= 0)
	{
		if (tab[i] > 0)
			ft_putchar(tab[i] + '0');
		else
			ft_putchar((tab[i] * -1) + '0');
		i--;
	}
}
