/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_directory.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 13:48:36 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 13:45:42 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static void display_path(char *path)
{
    ft_putchar('\n');
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
            display_path(tmp->path);
        if (opt->flags & FLAG_l)
            display_total(tmp->total);
        display_list(tmp->list, &tmp->max, opt);
        directories = directories->next;
    }
}