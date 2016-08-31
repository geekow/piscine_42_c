/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 01:11:07 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/09 12:06:06 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_the_pos_free(int solution[], int line, int row)
{
	int c_line;
	int c_row;
	int is_free;

	is_free = 1;
	c_line = 0;
	while (c_line <= line)
	{
		c_row = solution[c_line];
		if ((line - c_line) == (row - c_row) || (row == c_row))
			return (0);
		c_line++;
	}
	return (is_free);
}

int		comb_find_verif(int comb[])
{
	int index;
	int valid_comb;

	index = 0;
	valid_comb = 1;
	while (index < 8)
	{
		if (comb[index] == -1)
			valid_comb = 0;
		index++;
	}
	if (valid_comb)
		return (1);
	else
		return (0);
}

int		place_the_queen(int line, int total_comb_counter, int solution[])
{
	int row;

	if (line <= 7)
	{
		row = 0;
		while (row <= 7)
		{
			if (is_the_pos_free(solution, line, row))
			{
				solution[line] = row;
				place_the_queen(line + 1, total_comb_counter, solution);
				solution[line] = -1;
				solution[line - 1] = -1;
			}
			row += 1;
		}
	}
	else
	{
		if (comb_find_verif(solution) == 1)
			return (total_comb_counter++);
		else
			return (total_comb_counter);
	}
	return (0);
}

int		ft_eight_queens_puzzle(void)
{
	int solution[8];
	int init;
	int counter;

	init = 0;
	counter = 0;
	while (init <= 7)
	{
		if (place_the_queen(init, 0, solution))
			counter++;
		init++;
	}
	return (counter);
}
