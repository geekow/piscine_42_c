/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 02:10:44 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/23 02:18:56 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putstr(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
}

int		result_table(char charact)
{
	if ('0' <= charact && charact <= '9')
		return (1);
	else if (charact == '-')
		return (-1);
	else if (charact == '+')
		return (3);
	else if (charact == '\r' || charact == '\n' || charact == ' ' ||
			charact == '\t' || charact == '\v' || charact == '\f')
		return (2);
	else if (charact == '\0')
		return (-2);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int index;
	int multiplicator;
	int condition;
	int result;

	condition = result_table(str[0]);
	index = 0;
	multiplicator = 1;
	result = 0;
	while (condition == 2)
	{
		condition = result_table(str[++index]);
	}
	if (condition == -1 || condition == 3)
	{
		if (condition == -1)
			multiplicator = -1;
		condition = result_table(str[++index]);
	}
	while (condition == 1)
	{
		result = result * 10 + (str[index] - '0');
		condition = result_table(str[++index]);
	}
	return (multiplicator * result);
}
