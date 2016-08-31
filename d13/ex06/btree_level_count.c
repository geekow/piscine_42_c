/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 04:03:32 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/24 06:05:29 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	if (root)
	{
		return ((btree_level_count(root->left) > btree_level_count(root->right)
				? 1 + btree_level_count(root->left)
					: 1 + btree_level_count(root->right)));
	}
	else
		return (0);
}
