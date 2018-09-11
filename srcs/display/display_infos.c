/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_infos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:13:21 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/11 13:10:08 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

/*
static void display_size()
{
    if (type == S_IFCHR) // 'c'
    {
        major(stat.st_rdev);
        minor(stat.st_rdev);
    }
    else
    {
        put(stat.st_size);
    }
}
*/

void    display_infos(t_infos *infos, t_options *opt)
{
    (void)opt;
    ft_putstr(infos->mode);
    ft_putstr(" ");
    ft_putnbr(infos->link);
    ft_putstr(" ");
    ft_putstr(infos->uid);
    ft_putstr("  ");
    ft_putstr(infos->gid);
    ft_putstr("  ");
    ft_putnbr(infos->size);
    ft_putstr(" ");
    display_time(infos, opt);
    ft_putstr(" ");
}