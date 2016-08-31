/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_available.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 14:48:20 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/14 23:20:36 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		column_check_free(int y, int x, char **sudoku)
{
	int index_x;

	index_x = 0;
	while (index_x < 9)
	{
		if (sudoku[y][index_x] == sudoku[y][x] && index_x != x)
			return (0);
		index_x++;
	}
	return (1);
}

int		line_check_free(int y, int x, char **sudoku)
{
	int index_y;

	index_y = 0;
	while (index_y < 9)
	{
		if (sudoku[index_y][x] == sudoku[y][x] && index_y != y)
			return (0);
		index_y++;
	}
	return (1);
}

int		square_check_free(int y, int x, char **sudoku)
{
	int index_y;
	int index_x;
	int sqr_top_left_x;
	int sqr_top_left_y;

	sqr_top_left_x = (x / 3) * 3;
	sqr_top_left_y = (y / 3) * 3;
	index_x = sqr_top_left_x;
	index_y = sqr_top_left_y;
	while (index_x <= ((((x / 3) + 1) * 3) - 1))
	{
		while (index_y <= ((((x / 3) + 1) * 3) - 1))
		{
			if (sudoku[index_y][index_x] == sudoku[y][x] &&
									(x != index_x || y != index_y))
				return (0);
			index_y++;
		}
		index_y = sqr_top_left_y;
		index_x++;
	}
	return (1);
}

int		ft_is_available(int y, int x, char **sudoku)
{
	if (!column_check_free(y, x, sudoku))
		return (0);
	if (!line_check_free(y, x, sudoku))
		return (0);
	if (!square_check_free(y, x, sudoku))
		return (0);
	return (1);
}
