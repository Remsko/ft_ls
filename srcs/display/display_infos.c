/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_infos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:13:21 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/10 13:40:58 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    display_infos(t_infos *infos, t_options *opt)
{
    (void)opt;
    ft_putstr(infos->mode);
    ft_putstr(" ");
    ft_putnbr(infos->link);
    ft_putstr(" ");
    ft_putstr(infos->uid);
    ft_putstr(" ");
    ft_putstr(infos->gid);
    ft_putstr(" ");
    ft_putnbr(infos->size);
    ft_putstr(" ");
    ft_putstr(infos->time);
    //display_time(infos, opt);
    /*
    if (infos->time[0] == '0')
    {
        infos->time[16] = '\0';
        ft_putstr(infos->time + 4);
    }
    else
    {
        infos->time[10] = '\0';
        ft_putstr(infos->time + 4);
        infos->time[24] = '\0';
        ft_putstr(infos->time + 19);
    }
    */
    ft_putstr(" ");
}