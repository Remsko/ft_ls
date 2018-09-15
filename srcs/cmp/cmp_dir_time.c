/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_dir_time.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 13:58:20 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 14:04:26 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int     cmp_dir_time(void *front, void *back)
{
    t_directory *dir1 = (t_directory *)front;
    t_directory *dir2 = (t_directory *)back;
    if (dir1->st.st_mtime > dir2->st.st_mtime)
        return (1);
    else if (dir1->st.st_mtime < dir2->st.st_mtime)
        return (-1);
    else
        return (ft_strcmp(dir1->path, dir2->path));
}