/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 12:59:59 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 15:41:59 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    display_file(t_target *target, t_max *max, t_options *opt)
{
    if (opt->flags & FLAG_l)
    {
        //infos_extended(target->path, &infos->mode[10]);
        display_infos(&target->st, target->infos, max, opt);
    }
    ft_putstr(target->name);
    ft_putchar('\n');
}