/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraynard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 07:09:19 by lraynard          #+#    #+#             */
/*   Updated: 2019/08/02 07:14:19 by lraynard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putaddr_fd(void *str, int fd)
{
    long int    div;
    char    temp;
    unsigned long int   n;

    n = (unsigned long int)str;
    div = 16;
    write(fd, "0x", 2);
    while(n / div >=16)
        div *= 16;
    while (div > 0)
    {
        temp = '0' + n / div;
        if (temp > '9')
        {
            temp += 39;
            write(fd, &temp, 1);

        }
        else
                write(fd, &temp, 1);
        n%= div;
        div /= 16;
    }
}

void ft_putaddr(void *str)
{
    ft_putaddr_fd(str, 1);
}
