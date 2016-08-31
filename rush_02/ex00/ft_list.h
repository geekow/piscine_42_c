/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 19:35:06 by lduval            #+#    #+#             */
/*   Updated: 2016/08/21 22:44:23 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

t_list				*creat_list(char buf);
void				add_elem(t_list *dest, t_list *to_add);
int					size_list(t_list *src);
char				*li_to_str(t_list *src);

#endif
