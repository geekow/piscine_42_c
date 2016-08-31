/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 15:23:27 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/23 16:16:25 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		if (root->left != 0)
		{
			btree_apply_infix(root->left, applyf);
		}
		applyf(root->item);
		if (root->right != 0)
		{
			btree_apply_infix(root->right, applyf);
		}
	}
}
