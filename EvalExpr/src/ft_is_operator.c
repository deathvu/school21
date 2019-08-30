/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_operator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 09:23:03 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/18 13:21:01 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		is_operator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
		return (1);
	else
		return (0);
}

int		execution(num_stack **st, char op)
{
	if (op == '+')
		return (pop_num(st) + pop_num(st));
	if (op == '-')
		return (pop_num(st) - pop_num(st));
	if (op == '/')
		return (pop_num(st) / pop_num(st));
	if (op == '*')
		return (pop_num(st) * pop_num(st));
	if (op == '%')
		return (pop_num(st) % pop_num(st));
	else
		return (0);
}

int		priority(char op)
{
	if (op == '+' || op == '-')
		return (1);
	if (op == '*' || op == '/' || op == '%')
		return (2);
	else
		return (-1);
}
