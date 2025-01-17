/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaylord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 21:20:16 by egaylord          #+#    #+#             */
/*   Updated: 2019/08/21 14:52:08 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <stdio.h>
# include <stdlib.h>

typedef unsigned int	t_uint;

typedef struct			s_list
{
	char				data;
	struct s_list		*next;
}						t_list;

typedef struct			s_parse
{
	char				empty;
	char				obs;
	char				full;
	int					num_line;
}						t_parse;

typedef	struct			s_point
{
	int					x;
	int					y;
	int					value;
}						t_point;

t_parse					*ft_parse_first_line(char *c);

t_list					*ft_read_to_list(char *av);
t_list					*ft_create_elem(char data);

void					ft_list_clear(t_list **begin_list);

void					ft_point_init(t_point **point);
void					ft_list_push_front(t_list **begin_list, char data);
void					ft_list_reverse(t_list **begin_list);
void					ft_bsq(char *av);
void					ft_putnbr(int nb);
void					ft_putchar(char c);

void					ft_bsq_stdin(void);

char					*ft_scan_first_line(t_list **list);
char					**ft_scan_map(t_list *list, int num_line);

void					ft_cordsetter_pre(int **cords, char **map,
t_parse *parse, t_point **point);

void					ft_first_line(int **cords, char **map, t_parse *parse);

void					ft_print_map(char **map, t_point *point,
t_parse *parse);

void					ft_cordsetter(char **map, t_parse *parse,
						t_point **point);

int						ft_atoi(char *str);
int						ft_strlen(char *str);

#endif
