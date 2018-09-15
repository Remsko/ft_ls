/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_infos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:13:21 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 16:22:53 by rpinoit          ###   ########.fr       */
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

void    display_infos(struct stat *st, t_infos *infos, t_max *max, t_options *opt)
{
    display_mode(infos->mode);
    display_link(max->link, (long)st->st_nlink);
    display_uid(max->uid, infos->uid);
    display_gid(max->gid, infos->gid);
    display_size(max->size, (long)st->st_size);
    display_time(infos->time, opt);
}