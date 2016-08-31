/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 03:38:01 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/12 06:50:26 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (65 <= str[index] && str[index] <= 90)
		str[index] += 32;
		index++;
	}
	return (str);
}

int		valid(char *str, char *w1, char *w2, char *w3)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	while (w1[i] == str[i])
		i++;
	while (str[i] == ' ')
		i++;
	if (str[i + 1] == '\0')
		return (1);
	while (w2[i] == str[i])
		i++;
	while (str[i] == ' ')
		i++;
	if (str[i + 1] == '\0')
		return (1);
	while (w3[i] == str[i])
		i++;
	while (str[i] == ' ')
		i++;
	if (str[i + 1] == '\0')
		return (1);
	return (0);
}

int		special_word(char *str)
{
	int a;
	
	a = 0;
	str = ft_strlowcase(str);
	while (str[a] == ' ')
		a++;
	return (valid(str, "president", "attack", "owers"));
}

int		main(int argc, char **argv)
{
	int index;

	index = 1;
	while (index < argc)
	{
		if (special_word(argv[index]))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		index++;
	}
	return (0);
}
