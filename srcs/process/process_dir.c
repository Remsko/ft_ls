/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:11:59 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/31 18:49:34 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    process_dir(t_slist **list, char *path)
{
    DIR             *dir;
    struct dirent   *dirent;
    t_target        *target;
    t_slist         *new;
    char            *root;

    if ((dir = opendir(path)) == NULL)
        return (error_directory(path));
    while ((dirent = readdir(dir)) != NULL)
    {
        root = new_path(path, dirent->d_name);
        target = new_target(root);
        target->name = ft_strdup(dirent->d_name);
        if ((new = slist_new((void *)target)) == NULL)
            error_malloc();
        slist_add_start(list, new);
    }
    closedir(dir);
}