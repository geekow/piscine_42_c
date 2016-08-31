/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 23:27:36 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/17 14:01:34 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <unistd.h>

typedef struct			s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}						t_stock_par;

void					ft_putchar(char c);
void					ft_show_tab(struct s_stock_par *par);
struct s_stock_par		*ft_param_to_tab(int ac, char **av);

#endif
