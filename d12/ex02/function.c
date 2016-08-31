/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 02:33:10 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/23 04:31:23 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

void	print_header(char *str, int nb)
{
	if (nb != 3)
		ft_putstr(1, "\n");
	ft_putstr(1, "==> ");
	ft_putstr(1, str);
	ft_putstr(1, " <==\n");
}

void	unknow_file(char *str)
{
	ft_putstr(2, "tail: ");
	ft_putstr(2, str);
	ft_putstr(2, ": No such file or directory\n");
}

void	write_x_last(int total, char *str, int start)
{
	int		fd;
	char	buf;
	int		i;

	fd = open(str, O_RDONLY);
	buf = '\0';
	if (fd != -1)
	{
		i = 0;
		while (read(fd, &buf, 1))
		{
			i++;
			if (total - i < start)
				write(1, &buf, 1);
		}
		close(fd);
	}
	else
		unknow_file(str);
}

void	print_from_end(int start, int ac, char **av)
{
	int		i;
	int		fd;
	char	buf;
	int		c_ac;

	c_ac = 3;
	while (c_ac < ac)
	{
		fd = open(av[c_ac++], O_RDONLY);
		buf = '\0';
		if (fd != -1)
		{
			if (ac > 4)
				print_header(av[c_ac - 1], c_ac - 1);
			i = 0;
			while (read(fd, &buf, 1))
				i++;
			write_x_last(i, av[c_ac - 1], start);
			close(fd);
		}
		else
			unknow_file(av[c_ac - 1]);
	}
}

void	print_from_start(int start, int ac, char **av)
{
	int		i;
	int		fd;
	char	buf;
	int		c_ac;

	c_ac = 3;
	while (c_ac < ac)
	{
		fd = open(av[c_ac++], O_RDONLY);
		buf = '\0';
		if (fd != -1)
		{
			if (ac > 4)
				print_header(av[c_ac - 1], c_ac - 1);
			i = 0;
			while (read(fd, &buf, 1))
				if (++i > start)
					write(1, &buf, 1);
			close(fd);
		}
		else
			unknow_file(av[c_ac - 1]);
	}
}
