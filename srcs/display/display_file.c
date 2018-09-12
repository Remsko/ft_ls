/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 12:59:59 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/12 11:42:57 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    display_file(t_target *target, t_options *opt)
{
    t_infos *infos;

    //opt->flags |= FLAG_NL;
    if (opt->flags & FLAG_l)
    {
        infos = new_infos(&target->stat);
        infos_extended(target->path, &infos->mode[10]);
        display_infos(infos, opt);
    }
    ft_putstr(target->name);
    ft_putchar('\n');
}