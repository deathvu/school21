/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 18:29:55 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/21 10:50:11 by egaylord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int argc, char **argv)
{
	int		i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			ft_bsq(argv[i]);
			if (i != argc - 1)
				ft_putchar('\n');
			i++;
		}
	}
	else
	{
		ft_bsq_stdin();
	}
	return (0);
}
