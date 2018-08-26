/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_infos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 20:38:16 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/26 22:30:35 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_infos  *new_infos(char *path)
{
    t_infos     *new;
    struct stat sd;

    if (stat(path, &sd) == -1)
        error_stat();
    if ((new = (t_infos *)malloc(sizeof(t_infos))) == NULL)
        error_malloc();
    new->mode = infos_mode(sd.st_mode); // char *
    new->link = (unsigned long)sd.st_nlink; // unsigned long
    new->uid = infos_uid(sd.st_uid); // char *
    new->gid = infos_gid(sd.st_gid); // char *
    new->size = (unsigned long)sd.st_size; // unsigned long
    new->time = infos_time(sd.st_mtime); // char *
    return (new);
}