/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaylord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 21:37:59 by egaylord          #+#    #+#             */
/*   Updated: 2019/08/20 19:36:15 by lraynard         ###   ########.fr       */
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
	int		**s;
	int 	i;
	int 	j;
	t_point	*point;

	list = ft_read_to_list(av);
	c = ft_scan_first_line(&list);
	condition = ft_parse_first_line(c);
	map = ft_scan_map(list, condition->num_line);
	s = ft_cordsetter(map, condition, &point);
	i = 0;
	j = 0;
	while (i < 7)
	{
		j = 0;
		while (j < 15)
		{
			printf("%d  ", s[i][j]);
			j++;
		}
		printf("\n");
		printf("\n");
		i++;
	}
}
