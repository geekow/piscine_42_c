/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 15:24:09 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/18 16:01:22 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int index;
	int result;

	index = 0;
	while (s1[index] == s2[index])
	{
		index++;
		if (s1[index] == '\0' && s2[index] == '\0')
			return (0);
	}
	result = s1[index] - s2[index];
	return (result);
}

void	sort(int counter, char **tab)
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
			if (ft_strcmp(tab[i_1], tab[i_2]) < 0)
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

void	ft_sort_wordtab(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != 0)
		i++;
	sort(i, tab);
}
