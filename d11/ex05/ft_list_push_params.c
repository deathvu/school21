/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 14:00:10 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/14 16:01:21 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*ret;
	t_list	*tmp;

	i = 0;
	ret = 0;
	while (i < ac)
	{
		tmp = ft_create_elem(av[i]);
		if (!tmp)
			break ;
		tmp->next = ret;
		ret = tmp;
		i++;
	}
	return (ret);
}
