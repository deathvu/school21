/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 21:31:54 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/08 21:43:36 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_antidote(int a, int b, int c);

int		main()
{
	printf("%d", ft_antidote(1, 2, 3));
	printf("%c",'\n' );
	printf("%d", ft_antidote(1, 3, 2));
	printf("%c",'\n' );
	printf("%d", ft_antidote(2, 1, 3));
	printf("%c",'\n' );
	printf("%d", ft_antidote(2, 3, 1));
	printf("%c",'\n' );
	printf("%d", ft_antidote(3, 1, 2));
	printf("%c",'\n' );
	printf("%d", ft_antidote(1, 1, 1));
	return (0);
}
