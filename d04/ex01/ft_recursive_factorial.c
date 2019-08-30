/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 12:08:54 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/03 14:13:26 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	a;

	a = nb;
	if (nb < 0 || nb >= 17)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	return (a * ft_recursive_factorial(nb - 1));
}
