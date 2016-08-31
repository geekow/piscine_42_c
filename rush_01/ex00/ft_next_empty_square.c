/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_empty_square.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 17:33:27 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/14 22:53:57 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_next_empty_square(int y, int x, char **sudoku)
{
	int final;
	int temp_x;

	temp_x = x;
	while (y < 9)
	{
		while (x < 9)
		{
			if (sudoku[y][x] == '.' || sudoku[y][x] == '0')
			{
				final = (y * 10) + x;
				return (final);
			}
			x++;
		}
		x = 0;
		y++;
	}
	return (-1);
}
