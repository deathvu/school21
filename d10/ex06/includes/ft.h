/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fheader.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 13:54:13 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/12 18:48:13 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_atoi(char *str);
int		ft_calc(int a, char op, int b);
void	ft_putstr(char *str);
int		div_error(void);
int		mod_error(void);
void	ft_putchar(char c);
void	ft_nbr_check(int nbr);
void	ft_putnbr(int nbr);

#endif
