/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:11:59 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 15:30:42 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

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
            utils_setup_max(&target->st, target->infos, &directory->max);
            directory->total += (long)target->st.st_blocks;
        }
    }
    directory->max.link = ft_intlen(directory->max.link);
    directory->max.size = ft_intlen(directory->max.size);
    closedir(dir);
}