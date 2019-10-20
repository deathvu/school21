/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaylord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 10:54:46 by egaylord          #+#    #+#             */
/*   Updated: 2019/08/21 13:51:58 by lraynard         ###   ########.fr       */
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
		ft_list_push_front(&tmp, buf);
	close(fd);
	ft_list_reverse(&tmp);
	return (tmp);
}

void		ft_bsq(char *av)
{
	t_list	*list;
	char	**map;
	char	*c;
	t_parse	*condition;
	t_point	*point;

	list = ft_read_to_list(av);
	c = ft_scan_first_line(&list);
	condition = ft_parse_first_line(c);
	map = ft_scan_map(list, condition->num_line);
	ft_cordsetter(map, condition, &point);
	ft_print_map(map, point, condition);
}

void		ft_bsq_stdin(void)
{
	char	buf;
	t_list	*list;
	char	**map;
	char	*c;
	t_parse	*condition;
	t_point	*point;

	list = 0;
	while (read(0, &buf, 1))
		ft_list_push_front(&list, buf);
	ft_list_reverse(&list);
	c = ft_scan_first_line(&list);
	condition = ft_parse_first_line(c);
	map = ft_scan_map(list, condition->num_line);
	ft_cordsetter(map, condition, &point);
	ft_print_map(map, point, condition);
}
