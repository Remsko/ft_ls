/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 20:58:58 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 19:57:06 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static t_bool check_pointdir(char *name)
{
    if (name[0] == '.' && (name[1] == '\0'
        || (name[1] == '.' && name[2] == '\0')))
        return (TRUE);
    return (FALSE);
}

void display_list(t_slist *list, t_max *max, t_options *opt)
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
        if (S_ISDIR(target->st.st_mode) && opt->flags & FLAG_R)
        {
            if (check_pointdir(target->name) == FALSE)
            {
                if ((directory = new_directory(target->path)) == NULL)
                    error_malloc();
                process_dir(directory, opt);
                if ((new = slist_new((void *)directory)) == NULL)
                    error_malloc();
                slist_add_start(&directories, new);
            }
        }
        display_file(target, max, opt);
        list = list->next;
    }
    // free target list
    opt->utils |= UTILS_ARGS;
    display_directories(directories, opt);
}