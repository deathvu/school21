/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 16:50:19 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/15 17:06:06 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
							int (*cmpf)(void *, void *))
{
	if (root)
	{
		if (cmpf(root->data, data_ref) == 0)
			return (root->item);
		if (root->left)
			return (btree_search_item(root->left, data_ref, cmpf));
		if (root->right)
			return (btree_search_item(root->left, data_ref, cmpf));
	}
	return (0);
}
