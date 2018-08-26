/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:11:59 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/26 21:10:46 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    process_dir(t_slist **list, char *target)
{
    DIR             *dir;
    struct dirent   *dirent;
    t_file          *file;
    t_slist         *new;

    if ((dir = opendir(target)) == NULL)
        return (error_directory(target));
    while ((dirent = readdir(dir)) != NULL)
    {
        if ((file = new_file(dirent)) == NULL)
            error_malloc();
        if ((new = slist_new((void *)file)) == NULL)
            error_malloc();
        slist_add_start(list, new);
    }
    closedir(dir);
}