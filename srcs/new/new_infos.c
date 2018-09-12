/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_infos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 20:38:16 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/12 21:18:48 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_infos  *new_infos(struct stat *sd)
{
    t_infos     *new;

    if ((new = (t_infos *)malloc(sizeof(t_infos))) == NULL)
        error_malloc();
    new->mode = infos_mode(sd->st_mode);
    new->link = (int)sd->st_nlink;
    new->uid = infos_uid(sd->st_uid);
    new->gid = infos_gid(sd->st_gid);
    new->size = (int)sd->st_size;
    new->blocks = (int)sd->st_blocks;
    new->mtime = (int)sd->st_mtime;
    new->time = infos_time(sd->st_mtime);
    return (new);
}