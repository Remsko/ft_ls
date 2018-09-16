/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 12:59:59 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 14:01:26 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static void display_symbolink(char *path)
{
    char    buf[256];
    int     len;

    ft_putstr(" -> ");
    if ((len = readlink(path, buf, 256)) != -1)
		buf[len] = '\0';
    ft_putstr(buf);
}

void    display_file(t_target *target, t_max *max, t_options *opt)
{
    opt->utils |= UTILS_PRINT;
    if (opt->flags & FLAG_l)
    {
        infos_extended(target->path, &target->infos->mode[10]);
        display_infos(&target->st, target->infos, max, opt);
    }
    ft_putstr(target->name);
    if (opt->flags & FLAG_l && S_ISLNK(target->st.st_mode))
        display_symbolink(target->path);
    ft_putchar('\n');
    // free target
}