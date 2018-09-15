/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_uid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 14:16:32 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 10:05:29 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    display_uid(t_infos *infos, t_max *max, t_options *opt)
{
    (void)opt;
    int tmp;

    ft_putstr(infos->uid);
    if ((tmp = max->uid - ft_strlen(infos->uid)) > 0)
        while (tmp-- > 0)
            ft_putchar(' ');
    ft_putstr("  ");
}