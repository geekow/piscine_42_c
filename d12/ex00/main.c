/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 11:40:11 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/22 12:10:23 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

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
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc == 2)
		print_file(argv[1]);
	else
		write(2, "Too many arguments.\n", 20);
	return (0);
}
