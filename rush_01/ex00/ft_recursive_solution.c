/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_solution.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlebon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 16:07:36 by anlebon           #+#    #+#             */
/*   Updated: 2016/08/14 23:38:49 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_available(int y, int x, char **sudoku);
int		ft_next_empty_square(int y, int x, char **sudoku);

char	**ft_recursive_solution(char **grid)
{
	int i;
	int j;
	int value;
	int inext;
	int ynext;

	i = 0;
	j = 0;
	inext = 0;
	ynext = 0;
	value = 1;
	while (!(value == '9' && ft_is_available(i, j, grid)))
	{
		while (grid[i][j] != '.' && i < 9)
		{
			while (j < 9)
			{
				j++;
			}
			j = 0;
			i++;
		}
		grid[i][j] = value;
		if (ft_is_available(i, j, grid))
		{
			i = ft_next_empty_square(inext, ynext, grid) / 10;
			j = ft_next_empty_square(inext, ynext, grid) % 10;
		}
		else
		{
			value = 0;
			grid[i][j] = value;
		}
		ft_recursive_solution(grid);
		grid[i][j]++;		
	}
	return (grid);
}
