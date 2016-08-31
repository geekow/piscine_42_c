/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-2.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clhardou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 21:26:11 by clhardou          #+#    #+#             */
/*   Updated: 2016/08/21 22:01:45 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLE_2_H
# define COLLE_2_H

# include <stdlib.h>
# include <unistd.h>

typedef struct		s_champ
{
	int		num_colle;
	char	corner1;
	char	corner2;
	char	corner3;
	char	corner4;
	char	line;
	char	column;
}					t_champ;

char				*colle(int x, int y, int colle_nbr);
int					match(char *src, int x, int y);

#endif
