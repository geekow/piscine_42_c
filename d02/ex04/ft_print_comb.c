/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 00:13:40 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/04 14:41:19 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char		nmbr[3];

	nmbr[0] = '0';
	while (nmbr[0] < 56)
	{
		nmbr[1] = nmbr[0] + 1;
		while (nmbr[1] < 57)
		{
			nmbr[2] = nmbr[1] + 1;
			while (nmbr[2] <= 57)
			{
				ft_putchar(nmbr[0]);
				ft_putchar(nmbr[1]);
				ft_putchar(nmbr[2]);
				if (nmbr[0] != 55 || nmbr[1] != 56 || nmbr[2] != 57)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				nmbr[2]++;
			}
			nmbr[1]++;
		}
		nmbr[0]++;
	}
}
