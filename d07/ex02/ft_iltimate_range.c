/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iltimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 12:45:25 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/08 13:08:21 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int len;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (range[0]);
	}
	len = max - min;
	*range = (int *)malloc((len + 1));
	while (i < len)
	{
		range[0][i] = min + i;
		i++;
	}
	range[0][i] = 0;
	range = &str;
	return (i);
}
