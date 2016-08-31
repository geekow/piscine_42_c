/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 03:53:55 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/11 04:17:04 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i_dest;
	int i_src;

	i_dest = 0;
	i_src = 0;
	while (dest[i_dest] != '\0')
		i_dest++;
	if (nb >= 0)
		while (i_src < nb && src[i_src] != '\0')
		{
			dest[i_dest + i_src] = src[i_src];
			i_src++;
		}
	else if (nb < 0)
		while (src[i_src] != '\0')
		{
			dest[i_dest + i_src] = src[i_src];
			i_src++;
		}
	dest[i_dest + i_src] = '\0';
	return (dest);
}
