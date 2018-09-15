/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 13:45:57 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 10:05:23 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void display_size(t_infos *infos, t_max *max, t_options *opt)
{
    (void)opt;
    int tmp;

    tmp = max->size - ft_intlen(infos->size);
    while (tmp-- > 0)
        ft_putchar(' ');
    ft_putnbr(infos->size);
    ft_putstr(" ");
}