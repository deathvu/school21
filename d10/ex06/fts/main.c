/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:51:02 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/12 18:45:21 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_all.h"

int		main(int argc, char **argv)
{
	int			i;
	char		c;
	char const	*op;

	op = "+-*/%\0";
	i = 0;
	c = argv[2][0];
	if (argc != 4)
		return (0);
	if (c == '/' && (ft_atoi(argv[3])) == 0)
		return (div_error());
	if (c == '%' && (ft_atoi(argv[3]) == 0))
		return (mod_error());
	while (op[i])
	{
		if (op[i] == c)
		{
			ft_putnbr(ft_calc(ft_atoi(argv[1]), c, ft_atoi(argv[3])));
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	ft_putstr("0\n");
	return (0);
}
