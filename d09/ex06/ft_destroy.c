/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 00:56:18 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/12 02:32:20 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimator.h"
#include <stdlib.h>

void	ft_destroy(char ***factory)
{
	int	i_d1;
	int i_d2;

	i_d1 = 0;
	i_d2 = 0;
	while (factory[i_d1] != '\0')
	{
		while (factory[i_d1][i_d2] != '\0')
		{
			free(factory[i_d1][i_d2]);
			factory[i_d1][i_d2] = NULL;
			i_d2++;
		}
		free(factory[i_d1]);
		factory[i_d1] = NULL;
		i_d1++;
	}
	free(factory);
	factory = NULL;
}
