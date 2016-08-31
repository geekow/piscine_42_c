/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 11:52:52 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/05 16:26:12 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		start_str;
	int		last_str;
	char	stockage;

	start_str = 0;
	last_str = 0;
	while (*(str + last_str) != '\0')
		last_str++;
	while (last_str > start_str)
	{
		if (*(str + last_str) != '\0')
		{
			stockage = str[last_str];
			str[last_str] = str[start_str];
			str[start_str] = stockage;
			start_str++;
			last_str--;
		}
		else
			last_str--;
	}
	return (str);
}
