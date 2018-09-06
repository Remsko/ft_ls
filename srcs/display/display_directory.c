/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_directory.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 13:48:36 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/06 18:07:48 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static void display_path(char *path, t_options *opt)
{
    if (opt->flags & FLAG_PATH)
    {
        if (opt->flags & FLAG_NL)
            ft_putchar('\n');
        else
            opt->flags |= FLAG_NL;
        ft_putstr(path);
        ft_putstr(":\n");
    }
}

void display_directory(t_slist *directory, t_options *opt)
{
    t_directory *tmp;

    if ((opt->flags & FLAG_R) == 0)
        opt->flags |= FLAG_NO_R;
    while (directory != NULL)
    {
        tmp = (t_directory *)directory->content;
        display_path(tmp->path, opt);
        display_list(tmp->list, opt);
        directory = directory->next;
    }
}