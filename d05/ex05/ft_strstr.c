/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 17:20:46 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/10 19:43:33 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int index_str;
	int	index_tf;

	index_str = 0;
	while (str[index_str] != '\0')
	{
		index_tf = 0;
		while (str[index_str + index_tf] == to_find[index_tf])
		{
			if (to_find[++index_tf] == '\0')
				return (&str[index_str]);
		}
		index_str++;
	}
	return (0);
}
