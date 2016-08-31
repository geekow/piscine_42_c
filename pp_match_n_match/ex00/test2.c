/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 21:52:40 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/14 13:14:19 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	int		i;
	int		i2;
	int		test;
	char	s1_temp;

	i = 0;
	i2 = 0;
	test = next_type(s2);
	while (s1[i] != '\0' && test != '\0')
	{
		if(s2[i2] == '*')
		{
			while(str[i2] == '*')
				i2++;
			test = next_type(s2 + [i2]);
			s1 == ft_strrstr(s1, test);
			if (s1[0] == 0)
				return (0);
			i2 = 0;
		}
		else
		{
			test = next_type(s2);
			s1[i] == ft_strrstr(s1, test);
			if (s1[0] == 0)
				return (0);
		}
	}
	if (s1[i] == s
}

char	*next_type(char *str)
{
	int 	i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	if (str[i] == '\0')
		return (str);
	else
	{
		while (str[i] != '\0' && str[i] != '*')
			i++;
		if (str[i] == '\0')
			return (str);
		if (str[i] == '*')
		{
			while (j < i)
			{
				temp[j] = str[i]
				j++;
			}
			return (temp);
		}
	}
}

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
