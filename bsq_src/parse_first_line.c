/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_first_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaylord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 06:17:52 by egaylord          #+#    #+#             */
/*   Updated: 2019/08/20 06:58:52 by egaylord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_parse		*ft_parse_first_line(char *c)
{
	int		len;
	char	*tmp;
	t_parse	*condition;
	int		i;

	len = ft_strlen(c);
	tmp = (char *)malloc(sizeof(char) * (len - 2));
	condition = (t_parse *)malloc(sizeof(t_parse));
	i = 0;
	condition->full = c[len - 1];
	condition->obs = c[len - 2];
	condition->empty = c[len - 3];
	i = 0;
	while (i < (len - 3))
	{
		tmp[i] = c[i];
		i++;
	}
	tmp[i] = '\0';
	condition->num_line = ft_atoi(tmp);
	free(tmp);
	return (condition);
}
