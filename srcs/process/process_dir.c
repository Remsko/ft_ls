/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:11:59 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/11 18:26:57 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    process_dir(t_directory *directory)
{
    DIR             *dir;
    struct dirent   *dirent;
    t_target        *target;
    t_slist         *new;
    char            *root;

    if ((dir = opendir(directory->path)) == NULL)
        return (error_directory(directory->path));
    while ((dirent = readdir(dir)) != NULL)
    {
        root = new_path(directory->path, dirent->d_name);
        target = new_target(root);
        target->name = ft_strdup(dirent->d_name);
        if ((new = slist_new((void *)target)) == NULL)
            error_malloc();
        slist_add_start(&directory->list, new);
        directory->total += target->stat.st_blocks;

        if (directory->maxlinks < (unsigned long)target->stat.st_nlink)
            directory->maxlinks = (unsigned long)target->stat.st_nlink;
        if (directory->maxsize < (unsigned long)target->stat.st_size)
            directory->maxsize = (unsigned long)target->stat.st_size;
        int tmp;
        if (directory->maxuid < (tmp = ft_strlen(target->uid)))
            directory->maxuid = tmp;
        if (directory->maxgid < (tmp = ft_strlen(target->gid)))
            directory->maxgid = tmp;
    }
    closedir(dir);
}