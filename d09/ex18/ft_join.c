/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 15:33:16 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/12 16:14:42 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_join(char **tab, char *sep)
{
	char			result[];
	unsigned int	i[3];

	while (tab[i[0]] != '\0')
	{
		while (tab[i[0]][i[1]] != '\0')
			i[1]++;
		i[2] += i[1] + 2;
		i[0]++;
	}
	result = malloc(result);
	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	while (tab[i[0]] != '\0')
	{
		while (tab[i[0]][i[1]] != '\0')
		{
			result[i[3]++] = tab[i[0]][i[1]];
			i[1]++;
		}
		i[0]++;
	}
	return (result);
}
