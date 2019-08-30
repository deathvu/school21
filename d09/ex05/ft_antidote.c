/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 21:28:27 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/08 21:44:18 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		ft_antidote(int a, int b, int c)
{
	if (a < b)
		ft_swap(&a, &b);
	if (a < c)
		ft_swap(&a, &c);
	if (b < c)
		ft_swap(&b, &c);
	return (b);
}
