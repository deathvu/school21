/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaylord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 21:37:59 by egaylord          #+#    #+#             */
/*   Updated: 2019/08/20 21:12:11 by lraynard         ###   ########.fr       */
/*   Updated: 2019/08/20 15:54:28 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_list		*ft_read_to_list(char *av)
{
	int		fd;
	char	buf;
	t_list	*tmp;

	tmp = 0;
	fd = open(av, O_RDONLY | O_RDWR);
	while (read(fd, &buf, 1))
		ft_list_push_back(&tmp, buf);
	close(fd);
	return (tmp);
}

void		ft_bsq(char *av)
{
	t_list	*list;
	char	*c;
	char	**map;
	t_parse	*condition;
	t_point	*point;

	list = ft_read_to_list(av);
	c = ft_scan_first_line(&list);
	condition = ft_parse_first_line(c);
	map = ft_scan_map(list, condition->num_line);
	ft_cordsetter(map, condition, &point);
	ft_print_map(map, point, condition);
	ft_putchar('\n');
}
