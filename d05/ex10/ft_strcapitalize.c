/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 12:21:03 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/06 18:03:22 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strupcase(char c)
{
	if (c > 96 && c < 123)
		c += 'A' - 'a';
	return (c);
}

char	ft_strlowcase(char c)
{
	if (c > 64 && c < 91)
		c -= 'A' - 'a';
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = -1;
	while (str[i + 1] != '\0')
	{
		i++;
		if (str[i - 1] < 48 || (str[i - 1] < 65 && str[i - 1] > 57)
				|| (str[i - 1] > 90 && str[i - 1] < 97) || str[i - 1] > 122)
		{
			str[i] = ft_strupcase(str[i]);
		}
		while (((str[i] > 64 && str[i] < 91) && str[i - 1] != ' ')
				|| ((str[i] > 96 && str[i] < 123) && str[i - 1] != ' ')
				|| (str[i] >= 48 && str[i] <= 57))
		{
			i++;
			str[i] = ft_strlowcase(str[i]);
		}
	}
	return (str);
}
