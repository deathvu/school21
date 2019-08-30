/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 12:26:47 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/05 13:44:22 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	ft_nbr_check(int nbr)
{
	if (nbr != 0)
	{
		ft_nbr_check(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648\0");
		return ;
	}
	else if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	else if (nbr < 10)
	{
		ft_putchar(nbr + '0');
		return ;
	}
	ft_nbr_check(nbr);
}
