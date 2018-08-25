/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:11:59 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/25 23:13:43 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    process_dir(t_slist **directories, char *target)
{
    DIR             *dir;
    struct dirent   *dirent;
    t_object        *object;
    t_slist         *new;

    if ((dir = opendir(target)) == NULL)
        return (error_directory(target));
    while ((dirent = readdir(dir)) != NULL)
    {
        if ((object = new_object(dirent)) == NULL)
            error_malloc();
        if ((new = slist_new((void *)object)) == NULL)
            error_malloc();
        slist_add_start(directories, new);
    }
    closedir(dir);
}