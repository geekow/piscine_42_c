/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 16:17:33 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/23 19:37:48 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
			int (*cmpf)(void *, void *))
{
	t_btree		*x_tree;

	x_tree = *root;
	if (x_tree)
	{
		if (cmpf(x_tree->item, item) > 0)
			btree_insert_data(&x_tree->left, item, cmpf);
		else
		{
			if (cmpf(x_tree->item, item) <= 0)
				btree_insert_data(&x_tree->right, item, cmpf);
		}
	}
	else
		*root = btree_create_node(item);
}
