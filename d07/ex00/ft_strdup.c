/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 13:14:15 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/15 23:02:47 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char			*dest;
	unsigned int	i;
	unsigned int	i_2;

	i = 0;
	i_2 = 0;
	while (src[i] != '\0')
		i++;
	dest = (char*)malloc(sizeof(char) * (i + 1));
	while (i_2 < i)
	{
		dest[i_2] = src[i_2];
		i_2++;
	}
	dest[i_2] = '\0';
	return (dest);
}
