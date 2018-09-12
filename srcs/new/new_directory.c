/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_directory.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 13:12:08 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/12 11:40:29 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_directory    *new_directory(char *path)
{
    t_directory *new;

    if ((new = (t_directory *)malloc(sizeof(t_directory))) != NULL)
    {
        new->path = path;
        new->list = NULL;
        new->total = 0;
        new->maxlink = 0;
        new->maxsize = 0;
    }
    return (new);
}