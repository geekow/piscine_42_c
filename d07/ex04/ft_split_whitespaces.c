/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 11:02:42 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/16 02:00:47 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		define_char_table(char *str, char **to_treat)
{
	char	*tab;
	int		i;
	int		sep;
	int		word_counter;

	i = 0;
	word_counter = 0;
	sep = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			sep = 1;
		else
		{
			if (sep == 1)
				word_counter += 1;
			sep = 0;
		}
		i++;
	}
	tab = (char*)malloc(sizeof(*to_treat) * (word_counter + 1));
	*to_treat = tab;
	return (0);
}

int		next_word_size(char *str)
{
	int size;

	size = 0;
	while (str[size] != ' ' && str[size] != '\n' && str[size] != '\t' &&
			str[size] != '\0')
	{
		size++;
	}
	return (size);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		i_word;
	int		j;
	int		result;

	tab = (char**)malloc(sizeof(long));
	j = 0;
	i = define_char_table(str, tab);
	i_word = -1;
	while (str[i] != '\0')
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			result = next_word_size(str + i);
			tab[j] = (char*)malloc(sizeof(*str) * result);
			while (++i_word < result)
				tab[j][i_word] = str[i + i_word];
			tab[j++][i_word] = '\0';
			i += i_word;
			i_word = -1;
		}
		else
			i++;
	tab[j] = 0;
	return (tab);
}
