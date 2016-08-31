/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 14:47:15 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/23 15:08:26 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*btree;

	btree = malloc(sizeof(t_btree));
	if (btree)
	{
		btree->item = item;
		btree->left = 0;
		btree->right = 0;
	}
	return (btree);
}
