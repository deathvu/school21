/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 14:40:51 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/06 14:47:13 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 32 && str[i] <= 126) || str[0] == '\0'))
			return (0);
		i++;
	}
	return (1);
}