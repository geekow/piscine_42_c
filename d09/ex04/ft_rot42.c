/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 23:29:49 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/11 23:50:51 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	change_char_rot42(char c)
{
	int index;

	if (!('a' <= c && c <= 'z') && !('A' <= c && c <= 'Z'))
		return (c);
	index = 0;
	while (index < 42)
	{
		if (c == 'z')
			c = 96;
		if (c == 'Z')
			c = 64;
		c += 1;
		index++;
	}
	return (c);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = change_char_rot42(str[i]);
		i++;
	}
	return (str);
}
