/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 13:25:47 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/23 00:08:23 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/uio.h>
#include <sys/types.h>
#include <fcntl.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
}

void	print_file(char *file_name)
{
	int		fd;
	char	buf;

	fd = open(file_name, O_RDONLY);
	buf = '\0';
	if (fd != -1)
	{
		while (read(fd, &buf, 1))
		{
			write(1, &buf, 1);
		}
		close(fd);
	}
	else
	{
		ft_putstr(2, "cat: ");
		ft_putstr(2, file_name);
		ft_putstr(2, ": No such file or directory\n");
	}
}

void	read_input(void)
{
	char	buf;

	buf = '\0';
	while (read(0, &buf, 1))
	{
		write(1, &buf, 1);
	}
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		print_file(argv[i]);
		i++;
	}
	if (argc == 1)
	{
		read_input();
	}
	return (0);
}
