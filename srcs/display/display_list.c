/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 20:58:58 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/31 19:09:10 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void display_list(t_slist *list, int recu)
{
    t_slist *directories;
    t_slist *directory;
    t_slist *new;
    t_target *target;

    directories = NULL;
    directory = NULL;
    while (list != NULL)
    {
        target = (t_target *)list->content;
        if (target->stat.st_mode & S_IFDIR)
        {
            if (target->name[0] != '.'
            && (target->name[1] != '\0'
            || (target->name[1] != '.' && target->name[2] != '\0')))
            {
                process_dir(&directory, target->path);
                if ((new = slist_new((void *)directory)) == NULL)
                    error_malloc();
                slist_add_start(&directories, new);
            }
        }
        else
            display_file(target);
        list = list->next;
    }
    display_directory(directories, recu + 1);
}