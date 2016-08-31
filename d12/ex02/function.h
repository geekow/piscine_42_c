/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 02:51:37 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/23 03:42:04 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_H
# define FUNCTION_H

# include <unistd.h>
# include <sys/uio.h>
# include <sys/types.h>
# include <fcntl.h>

void	print_from_start(int nb, int ac, char **av);
void	print_from_end(int nb, int ac, char **av);
void	ft_putstr(int fd, char *str);
int		ft_atoi(char *str);

#endif
