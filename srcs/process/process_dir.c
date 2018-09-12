/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:11:59 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/12 12:49:16 by rpinoit          ###   ########.fr       */
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

/*
static void setup_max(t_directory *directory, t_infos *infos)
{
    int tmp;

    if (directory->maxlink < infos->link)
        directory->maxlink = infos->link;
    if (directory->maxsize < infos->size)
        directory->maxsize = infos->size;
    if (directory->maxuid < (tmp = ft_strlen(infos->uid)))
        directory->maxuid = tmp;
    if (directory->maxgid < (tmp = ft_strlen(infos->gid)))
        directory->maxgid = tmp;
}
*/

void    process_dir(t_directory *directory)
{
    DIR             *dir;
    struct dirent   *dirent;
    t_target        *target;
    t_slist         *new;

    if ((dir = opendir(directory->path)) == NULL)
        return (error_directory(directory->path));
    while ((dirent = readdir(dir)) != NULL)
    {
        target = new_target(directory->path, dirent->d_name);
        if ((new = slist_new((void *)target)) == NULL)
            error_malloc();
        slist_add_start(&directory->list, new);
        //setup_max(directory, target->infos);
        directory->total += target->stat.st_blocks;
    }
    directory->maxlink = ft_intlen(directory->maxlink);
    directory->maxsize = ft_intlen(directory->maxsize);
    closedir(dir);
}