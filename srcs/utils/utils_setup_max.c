/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_setup_max.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 15:24:02 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 15:26:29 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    utils_setup_max(struct stat *st, t_infos *infos, t_max *max)
{
    long tmp;

    if (max->link < (long)st->st_nlink)
        max->link = (long)st->st_nlink;
    if (max->size < (long)st->st_size)
        max->size = (long)st->st_size;
    if (infos->uid != NULL)
        if (max->uid < (tmp = ft_strlen(infos->uid)))
            max->uid = tmp;
    if (infos->gid != NULL)
        if (max->gid < (tmp = ft_strlen(infos->gid)))
            max->gid = tmp;
}