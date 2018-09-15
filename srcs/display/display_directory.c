/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_directory.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 13:48:36 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 21:19:30 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static void display_path(char *path, t_options *opt)
{
    if (opt->utils & UTILS_PRINT)
        ft_putchar('\n');
    opt->utils |= UTILS_PRINT;
    ft_putstr(path);
    ft_putstr(":\n");
}

static void display_total(int total)
{
    ft_putstr("total ");
    ft_putnbr(total);
    ft_putstr("\n");
}

void display_directories(t_slist *directories, t_options *opt)
{
    t_directory *tmp;

    process_sort(&directories, opt, TRUE);
    while (directories != NULL)
    {
        tmp = (t_directory *)directories->content;
        process_sort(&tmp->list, opt, FALSE);
        if (opt->utils & UTILS_ARGS)
            display_path(tmp->path, opt);
        if (opt->flags & FLAG_l && tmp->list != NULL)
            display_total(tmp->total);
        display_list(tmp->list, &tmp->max, opt);
        directories = directories->next;
    }
    // free list directories
}