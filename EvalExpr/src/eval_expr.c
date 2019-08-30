/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 09:28:34 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/18 16:24:20 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

char	*edit_str(char *str)
{
	int i;
	char *s;
	char *dst;

	i = 0;
	s = (char *)malloc(sizeof(char *) + 1);
	dst = (char *)malloc(sizeof(char *) + 1);
	ft_strcpy(s, str);
	ft_strcpy(dst, str);
	while (s[i])
	{
		*dst = *s;
		if ((*dst) != '+' || (*dst) != '-' || 
				(*dst) != '/' || (*dst) != '%' || (*dst) != '*' ||
				(*dst) != '(' || (*dst) != ')')
			dst++;
		s++;
	}
	*dst = '\0';
	return (dst);
}

char	**take_nums(char *s)
{
	int		i;
	char	*str;
	char 	**nums;

	i = 0;
	str = (char *)malloc(sizeof(char *) + 1);
	str = edit_str(s);
	nums = (char **)malloc(sizeof(char **) + 1);
	while (str[i])
	{	
		if (str[i] != ' ')
			**nums = str[i];
		else
			(*nums)++;
		i++;
	}
	return (nums);
}

int		eval_expr(char *str)
{
	int 			i;
	int 			j;
	char			**nums;
	num_stack		**statements;
	op_stack		**operators;

	statements = NULL;
	operators = NULL;
	i = 0;
	nums = (char **)malloc(sizeof(char **) + 1);
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else
		{
			if (str[i] == '(')
				push_op(operators, str[i]);
			else if (str[i] == ')')
			{
				while (pop_op(operators) != '(')
				{
					execution(statements, pop_op(operators));
					pop_op(operators);
				}
			}
			else if (is_operator(str[i]) == 1)
			{
				while (operators && priority(pop_op(operators) >= \
							priority(str[i])))
				{
					execution(statements, pop_op(operators));
					push_op(operators, str[i]);
				}
			}
			else
			{
				nums = take_nums(str);
				j = 0;
				while (nums[j])
					push_num(statements, ft_atoi(nums[j]));
				j++;
			}
		}
	}
	while (operators)
		execution(statements, pop_op(operators));
	return	pop_num(statements);
}
