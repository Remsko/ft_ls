/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:11:59 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 12:04:38 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

/*
static void fill_target()
{
    root;
    target;
    target->name;
    target->infos;
}
*/

static void setup_max(t_max *max, t_infos *infos)
{
    int tmp;

    if (max->link < infos->link)
        max->link = infos->link;
    if (max->size < infos->size)
        max->size = infos->size;
    if (infos->uid != NULL)
        if (max->uid < (unsigned long)(tmp = ft_strlen(infos->uid)))
            max->uid = tmp;
    if (infos->gid != NULL)
        if (max->gid < (unsigned long)(tmp = ft_strlen(infos->gid)))
            max->gid = tmp;
}

void    process_dir(t_directory *directory, t_options *opt)
{
    DIR             *dir;
    struct dirent   *dirent;
    t_target        *target;
    t_slist         *new;

    if ((dir = opendir(directory->path)) == NULL)
        return (error_directory(directory->path));
    while ((dirent = readdir(dir)) != NULL)
    {
        if (dirent->d_name[0] != '.' || opt->flags & FLAG_a)
        {
            target = new_target(directory->path, dirent->d_name);
            //infos_extended(target->path, &target->infos->mode[10]);
            if ((new = slist_new((void *)target)) == NULL)
                error_malloc();
            slist_add_start(&directory->list, new);
            setup_max(&directory->max, target->infos);
            directory->total += target->infos->blocks;
        }
    }
    directory->max.link = ft_intlen(directory->max.link);
    directory->max.size = ft_intlen(directory->max.size);
    closedir(dir);
}