/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 19:57:16 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/14 21:00:40 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (s1[0] && s2[0] && s2[0] != '*')
		return (match(s1 + 1, s2 + 1))
	
		
}
