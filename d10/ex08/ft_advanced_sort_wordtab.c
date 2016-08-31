/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 15:24:09 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/18 18:50:18 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort(int counter, char **tab, int (*cmp)(char *, char *))
{
	char	*temp;
	int		i_1;
	int		i_2;

	i_1 = 0;
	i_2 = 0;
	while (i_1 < counter)
	{
		while (i_2 < counter)
		{
			if (cmp(tab[i_1], tab[i_2]) < 0)
			{
				temp = tab[i_1];
				tab[i_1] = tab[i_2];
				tab[i_2] = temp;
			}
			i_2++;
		}
		i_2 = 0;
		i_1++;
	}
}

void	ft_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int i;

	i = 0;
	while (tab[i] != 0)
		i++;
	sort(i, tab, cmp);
}
