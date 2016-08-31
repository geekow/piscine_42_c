/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 23:04:39 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/14 02:05:03 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrstr(char *str, char *to_find)
{
	int		counter;
	int		i_tf;

	counter = 0;
	i_tf = 0;
	while (str[counter] != '\0')
		counter++;
	while (to_find[i_tf] != '\0')
		i_tf++;
	counter -= i_tf;
	while (counter >= 0)
	{
		i_tf = 0;
		while (str[counter + i_tf] == to_find[i_tf])
		{
			if (to_find[++i_tf] == '\0')
			{
				return (str + counter);
			}
		}
		counter--;
	}
	return (0);
}
