/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_link.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 13:39:34 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 10:05:16 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void display_link(t_infos *infos, t_max *max, t_options *opt)
{
    (void)opt;
    int tmp;

    tmp = max->link - ft_intlen(infos->link);
    while (tmp-- > 0)
        ft_putchar(' ');
    ft_putnbr(infos->link);
    ft_putstr(" ");
}