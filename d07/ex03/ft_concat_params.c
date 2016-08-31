/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 21:12:33 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/16 14:00:42 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		argv_size(int argc, char **argv)
{
	int i;
	int i_str;
	int counter;

	i = 1;
	i_str = 0;
	counter = 0;
	while (i < argc)
	{
		while (argv[i][i_str] != '\0')
			i_str++;
		counter += i_str;
		i_str = 0;
		i++;
	}
	return (counter);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		i_str;
	int		counter;
	char	*result;

	i = 0;
	i_str = 0;
	counter = argv_size(argc, argv);
	result = (char*)malloc(sizeof(*result) * (counter + argc));
	counter = 0;
	while (++i < argc)
	{
		while (argv[i][i_str] != '\0')
			result[counter++] = argv[i][i_str++];
		if (i != (argc - 1))
			result[counter++] = '\n';
		i_str = 0;
	}
	result[counter] = '\0';
	return (result);
}
