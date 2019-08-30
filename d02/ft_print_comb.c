/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 13:00:05 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/01 23:40:57 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_all(char a, char b, char c);
void	ft_putchar(char c);
void	ft_print_comb();

void	ft_print_all(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void	ft_print_comb(void)
{ 
	char a;
	char b;
	char c;
	
	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_print_all(a, b, c);
				c++;
				if (a < '7')
				{
					ft_putchar (',');
					ft_putchar (' ');
				}
			}
			b++;
		}
		a++;
	}
}	
