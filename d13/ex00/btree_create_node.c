/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 14:32:43 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/15 18:19:02 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(int *item)
{
	t_btree	*node;

	node = NULL;
	node = (t_btree*)malloc(sizeof(node));
	if (node)
	{
		node->item = &item;
		node->left = 0;
		node->right = 0;
	}
	return (node);
}
