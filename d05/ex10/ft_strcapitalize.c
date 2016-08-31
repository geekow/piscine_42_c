/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 00:46:23 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/11 01:22:52 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_a_or_n(char c)
{
	if ('0' <= c && c <= '9')
		return (3);
	else if ('a' <= c && c <= 'z')
		return (2);
	else if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int isaorn;

	i = 0;
	while (str[i] != '\0')
	{
		isaorn = is_a_or_n(str[i]);
		if (isaorn == 2)
		{
			if (!is_a_or_n(str[i - 1]) && is_a_or_n(str[i + 1]))
				str[i] -= 32;
		}
		if (isaorn == 1)
			if (is_a_or_n(str[i - 1]))
				str[i] += 32;
		i++;
	}
	return (str);
}
