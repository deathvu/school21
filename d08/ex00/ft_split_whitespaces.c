/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 15:41:54 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/09 16:01:28 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_separator(char c)
{
	if (c == '\n' || c == '\t' || c == ' ' || c == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		ct_len(int index, char *str)
{
	int		i;

	i = index;
	while (!(is_separator(str[index])))
	{
		index++;
	}
	return (index - i);
}

int		ct_wd(char *str)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_separator(str[i]))
			count++;
		i++;
	}
	return (count + 1);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	tab = malloc(ct_wd(str));
	while (str[j])
	{
		k = 1;
		while (is_separator(str[j]))
			j++;
		*(tab + i) = (char *)malloc(sizeof(char) * ((ct_len(j, str) + 1)));
		while (!(is_separator(str[j])))
		{
			tab[i][k - 1] = str[j++];
			k++;
		}
		tab[i++][k - 1] = '\0';
	}
	tab[i] = 0;
	return (&tab[0]);
}
