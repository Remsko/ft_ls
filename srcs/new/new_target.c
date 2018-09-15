/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_target.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 21:33:11 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 15:22:57 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_target    *new_target(char *d_path, char *d_name)
{
    t_target    *new;

    if ((new = (t_target *)malloc(sizeof(t_target))) == NULL)
        error_malloc();
    new->name = ft_strdup(d_name); 
    new->path = new_path(d_path, new->name);
    if (stat(new->path, &new->st) == -1)
        error_stat(new->path);
    new->infos = new_infos(&new->st);
    return (new);
}