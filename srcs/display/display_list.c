/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 20:58:58 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/29 13:39:29 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    display_list(t_slist *list)
{
    t_slist     *directories;
    t_slist     *directory;
    t_target    *target;

    directory = NULL;
    while (list != NULL)
    {
        target = (t_target *)list->content;
        if (target)
        {
        printf("%s", target->path);
        if (target->stat.st_mode & S_IFDIR)
        {
            printf(" -> directory\n");
            process_dir(&directory, target->path); // create new directory structure;
            slist_add_start(&directories, (void *)directory);
        }
        else
        {
            printf(" -> file\n");
            display_file(target);
        }
        }
        list = list->next;
    }
    display_directory(directories); //and in display directory -> target list -> display list
}