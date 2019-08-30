/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 20:18:05 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/07 21:55:36 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int	l;
	int	*dest;

	i = 0;
	l = max - min;
	if (min >= max)
		return (NULL);
	dest = (int *)malloc(sizeof(max) * l);
	while (i < l)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
