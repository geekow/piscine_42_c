/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 17:14:03 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/15 17:21:45 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
char	**ft_split_whitespaces(char *str);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

void	ft_print_words_tables(char **tab)
{
	int		counter;

	counter = 0;
	while (tab[counter] != 0)
	{
		ft_putstr(tab[counter]);
		ft_putchar('\n');
		counter++;
	}
}
