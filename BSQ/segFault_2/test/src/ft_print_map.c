/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 19:46:35 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/21 14:48:51 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_getter_map(char **map, t_point *point, t_parse *parse)
{
	int i;
	int j;

	i = 0;
	while (i < parse->num_line)
	{
		j = 0;
		while (j < ft_strlen(map[i]))
		{
			if (i <= point->x && i >= point->x - point->value + 1 &&
					j <= point->y && j >= point->y - point->value + 1)
				map[i][j] = parse->full;
			j++;
		}
		i++;
	}
}

void	ft_freemap(char **map, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		free(map[i]);
		i++;
	}
	free(map);
}

void	ft_print_map(char **map, t_point *point, t_parse *parse)
{
	int i;
	int j;

	i = 0;
	ft_getter_map(map, point, parse);
	while (i < parse->num_line)
	{
		j = 0;
		while (j < ft_strlen(map[i]))
		{
			ft_putchar(map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	ft_freemap(map, parse->num_line);
}
