/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 20:58:58 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/31 16:09:10 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    display_list(t_slist *list)
{
    t_slist     *directories;
    t_slist     *directory;
    t_slist     *new;
    t_target    *target;

    directories = NULL;
    directory = NULL;
    while (list != NULL)
    {
        target = (t_target *)list->content;
        if (target->stat.st_mode & S_IFDIR)
        {
            printf("path = %s\n", target->path);
            process_dir(&directory, target->path);
            if ((new = slist_new((void *)directory)) == NULL)
                error_malloc();
            slist_add_start(&directories, new);
        }
        else
            display_file(target);
        list = list->next;
    }
    display_directory(directories);
}