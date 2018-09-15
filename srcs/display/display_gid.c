/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_gid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 14:12:49 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 10:05:44 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    display_gid(t_infos *infos, t_max *max, t_options *opt)
{
    (void)opt;
    int tmp;

    ft_putstr(infos->gid);
    if ((tmp = max->gid - ft_strlen(infos->gid)) > 0)
        while (tmp-- > 0)
            ft_putchar(' ');
    ft_putstr("  ");
}