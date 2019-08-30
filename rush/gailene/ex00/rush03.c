/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 17:19:45 by amelita           #+#    #+#             */
/*   Updated: 2019/08/04 17:20:18 by amelita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	a_start(int q)
{
	int	count;

	count = 1;
	while (count <= q)
	{
		if (count == q)
		{
			ft_putchar('C');
			ft_putchar('\n');
		}
		else if (count == 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		count++;
	}
}

void	middle_start(int d)
{
	int counter;

	counter = 1;
	while (counter <= d)
	{
		if (counter == d)
		{
			ft_putchar('B');
			ft_putchar('\n');
		}
		else if (counter == 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		counter++;
	}
}

void	c_start(int w)
{
	int counter;

	counter = 1;
	while (counter <= w)
	{
		if (counter == w)
		{
			ft_putchar('C');
			ft_putchar('\n');
		}
		else if (counter == 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		counter++;
	}
}

void	rush(int x, int y)
{
	int count;

	count = 1;
	while (count <= y)
	{
		if (count == 1)
			a_start(x);
		else if (count == y)
			c_start(x);
		else
			middle_start(x);
		count++;
	}
}
