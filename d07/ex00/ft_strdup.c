/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 19:55:18 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/12 17:04:29 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	int		s;
	int		i;
	char	*dest;

	i = 0;
	s = 0;
	while (src[s])
		s++;
	dest = (char *)malloc(sizeof(*dest) * (s + 1));
	while (i < s)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
