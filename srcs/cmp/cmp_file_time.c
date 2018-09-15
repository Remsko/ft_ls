/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_file_time.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 11:29:15 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 14:04:30 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int     cmp_file_time(void *front, void *back)
{
    t_target *target1;
    t_target *target2;

    target1 = (t_target *)front;
    target2 = (t_target *)back;
    if (target1->infos->mtime > target2->infos->mtime)
        return (1);
    else if (target1->infos->mtime < target2->infos->mtime)
        return (-1);
    else
        return (ft_strcmp(target1->name, target2->name));
}