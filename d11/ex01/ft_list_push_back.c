/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 12:09:06 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/14 15:54:50 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back_alt(t_list *list, void *data)
{
	if (list->next == 0)
		list->next = ft_create_elem(data);
	else
		ft_list_push_back_alt(list->next, data);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	if (!*begin_list)
		*begin_list = ft_create_elem(data);
	else
		ft_list_push_back_alt(*begin_list,data);
}
