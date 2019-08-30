/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 13:16:29 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/12 14:18:06 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int		div_error(void)
{
	ft_putstr("Stop : division by zero\n");
	return (0);
}

int		mod_error(void)
{
	ft_putstr("Stop : modulo by zero\n");
	return (0);
}
