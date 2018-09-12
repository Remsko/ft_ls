/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 20:58:58 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/12 21:19:43 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static t_bool check_pointdir(char *name)
{
    if (name[0] == '.' && (name[1] == '\0' || (name[1] == '.' && name[2] == '\0')))
        return (TRUE);
    return (FALSE);
}

void display_list(t_slist *list, t_options *opt)
{
    t_directory *directory;
    t_slist *directories;
    t_slist *new;
    t_target *target;

    directory = NULL;
    directories = NULL;
    while (list != NULL)
    {
        target = (t_target *)list->content;
        if (target->infos->mode[0] == 'd')
        {
            if (check_pointdir(target->name) == FALSE)
            {
                if ((directory = new_directory(target->path)) == NULL)
                    error_malloc();
                process_dir(directory);
                if ((new = slist_new((void *)directory)) == NULL)
                    error_malloc();
                slist_add_start(&directories, new);
            }
            //if ((opt->flags & FLAG_NO_R) != 0)
            //    display_file(target, opt);
        }
        //else
        display_file(target, opt);
        list = list->next;
    }
    //if (opt->flags & FLAG_R || (opt->flags & FLAG_NO_R) == 0)
        display_directory(directories, opt);
}