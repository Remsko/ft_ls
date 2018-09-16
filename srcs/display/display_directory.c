/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_directory.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 13:48:36 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 17:55:34 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static void display_path(char *path, t_options *opt)
{
    if (opt->utils & UTILS_ARGS)
	{
    	if (opt->utils & UTILS_PRINT)
        	ft_putchar('\n');
    	opt->utils |= UTILS_PRINT;
    	ft_putstr(path);
    	ft_putstr(":\n");
	}
}

static void display_total(int total)
{
    ft_putstr("total ");
    ft_putnbr(total);
    ft_putstr("\n");
}

void display_directories(t_slist *directories, t_options *opt)
{
    t_directory *directory;
    t_slist     *tmp;

    process_sort(&directories, opt, TRUE);
    tmp = directories;
    while (tmp != NULL)
    {
        directory = (t_directory *)tmp->content;
        display_path(directory->path, opt);
        process_dir(directory, opt);
        process_sort(&directory->list, opt, FALSE);
        if (opt->flags & FLAG_l && directory->list != NULL)
            display_total(directory->total);
        display_list(directory->list, &directory->max, opt);
        tmp = tmp->next;
    }
    slist_delete(&directories, utils_sweeper);
}
