/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 20:58:58 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/31 21:29:21 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static t_bool   check_point(char *name)
{
    if (name[0] != '.')
        return (FALSE);
    else
    {
        if (name[1] == '\0')
            return (TRUE);
        else if (name[1] == '.' && name[2] == '\0')
            return (TRUE);
        else
            return (FALSE);
    }
}

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
            if (check_point(target->name) == FALSE)
            //if (ft_strcmp(target->name, "..") != 0)
            {
                process_dir(&directory, target->path);
                if ((new = slist_new((void *)directory)) == NULL)
                    error_malloc();
                slist_add_start(&directories, new);
            }
        }
        display_file(target);
        list = list->next;
    }
    //if (directories != NULL)
    //    ft_putchar('\n');
    display_directory(directories, recu + 1);
}