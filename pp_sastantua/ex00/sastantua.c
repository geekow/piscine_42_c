/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 15:18:23 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/07 20:30:50 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		calc_base(int lines, int current_floor)
{
	int tot_stars;
	int floor_size;
	int actual_line;
	int new_line_supp;

	new_line_supp = 2;
	floor_size = 3;
	tot_stars = -1;
	actual_line = 1;
	while (actual_line <= lines)
	{
		tot_stars += 2;
		if (actual_line == floor_size && (actual_line != lines))
		{
			if (current_floor % 2 != 0)
				new_line_supp += 2;
			tot_stars += new_line_supp;
			current_floor++;
			floor_size += current_floor + 2;
		}
		actual_line++;
	}
	return (tot_stars);
}

void	put_the_door(int line, int pos, int size, int last_line)
{
	int door_dim;
	int base_size;
	int ver_line;

	door_dim = size;
	base_size = (calc_base(last_line, 1) / 2);
	if ((size % 2) == 0)
		door_dim = size - 1;
	if ((last_line - line) < door_dim)
	{
		door_dim = door_dim / 2;
		if ((base_size - door_dim) <= pos && pos <= (base_size + door_dim))
		{
			ver_line = last_line - door_dim;
			if (line == ver_line && pos == (base_size + door_dim - 1) &&
					size > 4)
				ft_putchar('$');
			else
				ft_putchar('|');
		}
		else
			ft_putchar('*');
	}
	else
		ft_putchar('*');
}

void	write_the_line(int size_base, int line_to_w, int size, int last_line)
{
	int star_numbers;
	int space_numbers;
	int i;

	star_numbers = calc_base(line_to_w, 1);
	space_numbers = ((size_base / 2) - (star_numbers / 2)) - 1;
	i = 0;
	while (i <= space_numbers)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('/');
	star_numbers += space_numbers;
	while (i <= star_numbers)
	{
		put_the_door(line_to_w, i, size, last_line);
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	sastantua(int size)
{
	int i;
	int tot_lines;
	int size_base;

	i = 1;
	tot_lines = 0;
	while (i <= size)
	{
		tot_lines += i + 2;
		i++;
	}
	size_base = calc_base(tot_lines, 1);
	i = 1;
	while (tot_lines >= i)
	{
		write_the_line(size_base, i, size, tot_lines);
		i++;
	}
}
