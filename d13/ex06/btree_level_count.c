/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:06:33 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/15 18:55:13 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		largern(int a, int b)
{
	return (a > b ? a : b);
}

int		btree_level_count(t_btree *root)
{
	int i;

	if (root == NULL)
		return (0);
	else
	{
		i = largern(btree_level_count(root->left),
					btree_level_count(root->right));
		return (1 + i);
	}
}
