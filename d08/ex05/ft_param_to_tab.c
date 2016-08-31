/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 21:56:30 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/17 13:59:37 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char				*ft_strdup(char *src)
{
	char			*dest;
	unsigned int	i;
	unsigned int	i_2;

	i = 0;
	i_2 = 0;
	while (src[i] != '\0')
		i++;
	dest = (char*)malloc(sizeof(char) * (i + 1));
	while (i_2 < i)
	{
		dest[i_2] = src[i_2];
		i_2++;
	}
	dest[i_2] = '\0';
	return (dest);
}

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*stock_param;
	int				i;

	stock_param = (t_stock_par*)malloc(sizeof(*stock_param) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		stock_param[i].size_param = ft_strlen(av[i]);
		stock_param[i].str = av[i];
		stock_param[i].copy = ft_strdup(av[i]);
		stock_param[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	stock_param[i].str = NULL;
	return (stock_param);
}
