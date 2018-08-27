/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_target.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 21:33:11 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/27 21:42:59 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_target    *new_target(char *path)
{
    t_target *new;

    if ((new = (t_target *)malloc(sizeof(t_target))) == NULL)
        error_malloc();
    if (stat(path, &new->stat) == -1)
        error_stat();
    new->path = path;
    return (new);
}