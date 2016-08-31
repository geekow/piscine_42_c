/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 21:46:46 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/10 22:07:12 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;
	int				result;

	result = 0;
	index = 0;
	if (n == 0)
		return (0);
	while (s1[index] == s2[index] && index < n)
	{
		index++;
		if (s1[index] == '\0' && s2[index] == '\0')
			return (0);
	}
	result = s1[index] - s2[index];
	return (result);
}
