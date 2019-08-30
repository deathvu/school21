/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 12:11:37 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/01 12:27:07 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_numbers();
void	ft_putchar ();

void	ft_print_numbers(void)
{
	char number;

	number = '0';
	while (number <= '9')
	{
		ft_putchar(number);
		number = number + 1;
	}
}
