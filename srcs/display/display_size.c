/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 13:45:57 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 15:34:42 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void display_size(long max, long size)
{
    long tmp;

    tmp = max - ft_intlen(size);
    while (tmp-- > 0)
        ft_putchar(' ');
    ft_putnbr((int)size);
    ft_putstr(" ");
}