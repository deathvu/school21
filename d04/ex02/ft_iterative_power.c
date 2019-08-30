/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 13:22:59 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/03 15:20:16 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_interative_power(int nb, int power)
{
	int f;

	if (nb == 0)
	{
		return(0);
	}
	else if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return(1);
	}
	else 
	{
		while (power > 0)
		{
			nb *= nb;
			power--;
		}
		return (nb);
	}
}

