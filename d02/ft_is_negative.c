/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 12:35:06 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/01 13:41:07 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);
void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	int num;

	num = n;
	if (num > 0)
	{
		ft_putchar('P');
	}
	else
		ft_putchar('N');
}
