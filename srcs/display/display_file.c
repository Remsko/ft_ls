/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 12:59:59 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 13:07:38 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    display_file(t_target *target, t_max *max, t_options *opt)
{
    //opt->flags |= FLAG_NL;
    //printf("name = %s\n", target->name);
    //printf("path = %s\n", target->path);
    //printf("time = %lu\n", target->infos->mtime);
    //printf("%s", target->infos->time);
    if (opt->flags & FLAG_l)
    {
        //infos_extended(target->path, &infos->mode[10]);
        display_infos(target->infos, max, opt);
    }
    ft_putstr(target->name);
    ft_putchar('\n');
}