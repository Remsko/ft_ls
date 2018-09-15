/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_file_time.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 11:29:15 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 21:17:29 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int     cmp_file_time(void *front, void *back)
{
    t_target *tar1;
    t_target *tar2;

    tar1 = (t_target *)front;
    tar2 = (t_target *)back;
    if (tar1->st.st_mtime < tar2->st.st_mtime)
        return (1);
    else if (tar1->st.st_mtime > tar2->st.st_mtime)
        return (-1);
    else
    {
        if (tar1->st.st_mtimespec.tv_sec < tar2->st.st_mtimespec.tv_sec)
            return (1);
        if (tar1->st.st_mtimespec.tv_sec > tar2->st.st_mtimespec.tv_sec)
            return (-1);
        else
        {
            if (tar1->st.st_mtimespec.tv_nsec < tar2->st.st_mtimespec.tv_nsec)
                return (1);
            if (tar1->st.st_mtimespec.tv_nsec > tar2->st.st_mtimespec.tv_nsec)
                return (-1);
            else
                return (ft_strcmp(tar1->name, tar2->name)); 
        }
    }
}