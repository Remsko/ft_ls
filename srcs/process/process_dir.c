/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:11:59 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/29 13:39:07 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    process_dir(t_slist **list, char *path)
{
    DIR             *dir;
    struct dirent   *dirent;
    t_target        *target;
    t_slist         *new;
    (void)list;
    // blocks dir
    if ((dir = opendir(path)) == NULL)
        return (error_directory(path));
    while ((dirent = readdir(dir)) != NULL)
    {
        target = new_target(dirent->d_name);
        printf("path %s -> target->path %s\n", path, target->path);
        if ((new = slist_new((void *)target)) == NULL)
            error_malloc();
        slist_add_start(list, new);
        // add dir block to blocks dir;
    }
    closedir(dir);
    // return blocks dir
}