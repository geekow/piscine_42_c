/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 15:11:13 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/23 15:21:42 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		applyf(root->item);
		if (root->left != 0)
			btree_apply_prefix(root->left, applyf);
		if (root->right != 0)
			btree_apply_prefix(root->right, applyf);
	}
}
