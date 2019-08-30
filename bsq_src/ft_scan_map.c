/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scan_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 21:21:15 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/21 17:31:37 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char		*ft_scan_first_line(t_list **list)
{
	t_list		*tmp;
	t_list		*tlis;
	int			count;
	int			i;
	char		*c;

	i = 0;
	count = 0;
	tlis = *list;
	tmp = *list;
	while (tlis->data != '\n')
	{
		tlis = tlis->next;
		count++;
	}
	c = (char *)malloc(sizeof(char ) * count + 1);
	while (i < count)
	{
		c[i] = tmp->data;
		tmp = ((*list)->next);
		free(*list);
		*list = tmp;
		i++;
	}
	return (c);
}

char		**ft_scan_map(t_list *list, int num_line)
{
	char	**map;
	int		counter[2];
	t_list	*tmp;
	t_list	*tlis;
	int		count;

	counter[0] = 0;
	count = 0;
	tmp = list;
	tlis = tmp;
	map = (char **)malloc(sizeof(char *) * num_line);
	while (counter[0] < num_line)
	{
		count = 0;
		tmp = tmp->next;
		tlis = tlis->next;
		while (tlis->data != '\n')
		{
			tlis = tlis->next;
			count++;
		}
		map[counter[0]] = (char *)malloc(sizeof(char) * count + 2);
		counter[1] = 0;
		while (counter[1] < count)
		{
			map[counter[0]][counter[1]] = tmp->data;
			tmp = tmp->next;
			counter[1]++;
		}
		map[counter[0]][counter[1]] = '\n';
		map[counter[0]][counter[1] + 1] = '\0';
		counter[0]++;
	}
	return (map);
}
