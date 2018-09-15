/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_infos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:13:21 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/13 20:12:02 by rpinoit          ###   ########.fr       */
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

void    display_infos(t_infos *infos, t_max *max, t_options *opt)
{
    display_mode(infos, max, opt);
    display_link(infos, max, opt);
    display_uid(infos, max, opt);
    display_gid(infos, max, opt);
    display_size(infos, max, opt);
    display_time(infos, opt);
}