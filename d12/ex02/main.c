/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 00:43:45 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/23 04:29:09 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

void	illegal_offset(char *str)
{
	ft_putstr(2, "tail: illegal offset -- ");
	ft_putstr(2, str);
	ft_putstr(2, "\n");
}

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 3)
	{
		if (argv[2][0] == '+')
		{
			if (argv[2][1] != '\0')
			{
				i = ft_atoi(argv[2]);
				print_from_start(i, argc, argv);
			}
			else
				illegal_offset("+");
		}
		else
		{
			i = ft_atoi(argv[2]);
			i = i < 0 ? i * -1 : i;
			print_from_end(i, argc, argv);
		}
	}
	else
		illegal_offset(argv[2]);
	return (0);
}
