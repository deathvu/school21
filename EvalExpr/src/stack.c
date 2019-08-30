/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 09:24:10 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/18 13:21:03 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	push_num(num_stack **head, int value)
{
	num_stack *tmp;

	tmp = malloc(sizeof(num_stack));
	if (tmp == NULL)
		exit (STACK_OVERFLOW);
	tmp->next = *head;
	tmp->statement = value;
	*head = tmp;
}

int		pop_num(num_stack **head)
{
	num_stack *out;
	int		value;

	if ((*head) == NULL)
		exit (STACK_UNDERFLOW);
	out = *head;
	*head = (*head)->next;
	value = out->statement;
	free(out);
	return (value);
}

int		peek_num(num_stack *head)
{
	if (head == NULL)
		exit(STACK_UNDERFLOW);
	return (head->statement);
}

void	push_op(op_stack **head, char value)
{
	op_stack *tmp;

	tmp = malloc(sizeof(op_stack));
	if (tmp == NULL)
		exit (STACK_OVERFLOW);
	tmp->next = *head;
	tmp->op = value;
	*head = tmp;
}

char		pop_op(op_stack **head)
{
	op_stack	 *out;
	char		value;

	if ((*head) == NULL)
		exit (STACK_UNDERFLOW);
	out = *head;
	*head = (*head)->next;
	value = out->op;
	free(out);
	return (value);
}

char	peek_op(op_stack *head)
{
	if (head == NULL)
		exit(STACK_UNDERFLOW);
	return (head->op);
}
