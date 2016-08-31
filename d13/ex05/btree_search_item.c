/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 19:49:02 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/23 23:10:17 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
			int (*cmpf)(void *, void *))
{
	if (root)
	{
		if (root->left != 0)
			if (btree_search_item(root->left, data_ref, cmpf) != 0)
				return (btree_search_item(root->left, data_ref, cmpf));
		if (cmpf(data_ref, root->item) == 0)
			return (root->item);
		if (root->right != 0)
			if (btree_search_item(root->right, data_ref, cmpf) != 0)
				return (btree_search_item(root->right, data_ref, cmpf));
	}
	return (0);
}
