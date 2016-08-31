/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 16:08:49 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/23 16:13:04 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		if (root->left != 0)
		{
			btree_apply_suffix(root->left, applyf);
		}
		if (root->right != 0)
		{
			btree_apply_suffix(root->right, applyf);
		}
		applyf(root->item);
	}
}
