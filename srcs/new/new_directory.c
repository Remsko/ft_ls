/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_directory.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 13:12:08 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 14:00:35 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_directory    *new_directory(char *path)
{
    t_directory *new;

    if ((new = (t_directory *)malloc(sizeof(t_directory))) != NULL)
    {
        if (stat(path, &new->st) == -1)
            error_stat(path);
        new->path = path;
        new->list = NULL;
        new->total = 0;
        new->max.link = 0;
        new->max.size = 0;
        new->max.uid = 0;
        new->max.gid = 0;
    }
    return (new);
}