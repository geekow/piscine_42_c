/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 19:45:24 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/10 21:44:35 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int index;
	int result;

	index = 0;
	while (s1[index] == s2[index])
	{
		index++;
		if (s1[index] == '\0' && s2[index] == '\0')
			return (0);
	}
	result = s1[index] - s2[index];
	return (result);
}
