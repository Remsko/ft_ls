/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_time.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 13:40:48 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/11 13:10:42 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static void display_day(char *time)
{
    write(1, time + 4, 7);
}

static void display_hours(char *time)
{
    write(1, time + 11, 5);
}

static void display_year(char *time)
{
    write(1, time + 19, 5);
}

void    display_time(t_infos *infos, t_options *opt)
{
    (void)infos;
    (void)opt;
    display_day(infos->time);
    if (infos->time[0] == '0')
        display_hours(infos->time);
    else
        display_year(infos->time);
}