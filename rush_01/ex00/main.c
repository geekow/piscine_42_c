/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlebon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 19:04:49 by anlebon           #+#    #+#             */
/*   Updated: 2016/08/14 23:28:52 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	**ft_recursive_solution(char **grid);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, " ", 1);
		write(1, &str[i], 1);
		write(1, " ", 1);
		i++;
	}
}

int		ft_valid_param(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (argc != 10)
		return (0);
	while (i < argc)
	{
		while (argv[i][j] != '\0' && j < 9)
		{
			if ((argv[i][j] >= '1' && argv[i][j] <= '9') || argv[i][j] == '.')
			{
				j += 1;
			}
			else
				return (0);
		}
		j = 0;
		i += 1;
	}
	return (1);
}

void	ft_display_grid(char **grid, int argc)
{
	int i;

	i = 0;
	while (i < argc - 1)
	{
		ft_putstr(grid[i]);
		ft_putstr("\n");
		i++;
	}
}

char	**ft_write(char **argv)
{
	int		i;
	int		j;
	char	**grid;
	int		iargv;

	i = 0;
	iargv = 1;
	grid = argv + 1;
	while (i < 9 && iargv <= 9)
	{
		j = 0;
		while (j < 9)
		{
			grid[i][j] = argv[iargv][j];
			j++;
		}
		i++;
		iargv++;
	}
	return (grid);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	**str;

	i = 0;
	j = 0;
	if (!ft_valid_param(argc, argv))
	{
		write(1, "Erreur\n", 7);
		return (0);
	}
	str = ft_write(argv);
	ft_recursive_solution(str);
	ft_display_grid(str, argc);
	return (0);
}
