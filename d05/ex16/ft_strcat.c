/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 02:41:03 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/11 03:52:18 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i_src;
	int i_dest;
	int i;

	i_src = 0;
	i_dest = 0;
	i = 0;
	while (src[i_src] != '\0')
		i_src++;
	while (dest[i_dest] != '\0')
		i_dest++;
	while (i <= i_src)
	{
		dest[i_dest + i] = src[i];
		i++;
	}
	return (dest);
}
