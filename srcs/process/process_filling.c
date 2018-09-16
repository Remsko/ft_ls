/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_filling.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 20:51:16 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 12:57:25 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void process_filling(t_slist **directories, t_options *opt, char **av)
{
    t_directory *directory;
    t_slist *list;
    t_slist *new;
    t_target *tmp;
    t_target *target;

    new = NULL;
    list = NULL;
    if (av == NULL || *av == NULL)
    {
        if ((directory = new_directory(".")) == NULL)
            error_malloc();
        process_dir(directory, opt);
        if ((new = slist_new((void *)directory)) == NULL)
            error_malloc();
        slist_add_start(directories, new);
    }
    else
    {
        t_max max;

        ft_bzero((void *)&max, sizeof(t_max));
        list = NULL;
        if (*av != NULL && *(av + 1) != NULL)
            opt->utils |= UTILS_ARGS;
        while (*av != NULL)
        {
            if ((target = new_target(NULL, *av)) != NULL)
            {
                slist_add_start(&list, slist_new((void *)target));
                utils_setup_max(&target->st, target->infos, &max);
            }
            ++av;
        }
        max.link = ft_intlen(max.link);
        max.size = ft_intlen(max.size);
        process_sort(&list, opt, FALSE);
        while (list != NULL)
        {
            tmp = (t_target *)list->content;
            if (S_ISDIR(tmp->st.st_mode) && opt->flags & FLAG_R)
            {
                if ((directory = new_directory(tmp->path)) == NULL)
                    error_malloc();
                process_dir(directory, opt);
                if ((new = slist_new((void *)directory)) == NULL)
                    error_malloc();
                slist_add_start(directories, new);
            }
            else
                display_file(tmp, &max, opt);
            list = list->next;
        }
        //slist_delete(&memory, utils_cleaner);
    }
}
