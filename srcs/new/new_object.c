/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_object.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 23:08:51 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/25 23:11:14 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_object    *new_object(struct dirent *dirent)
{
    t_object *new;

    if ((new = (t_object *)malloc(sizeof(t_object))) != NULL)
    {
        new->dirent = dirent;
        new->sub = NULL;
    }
    return (new);
}