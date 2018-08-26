/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 20:37:55 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/26 21:15:18 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_file    *new_file(struct dirent *dirent)
{
    t_file *new;

    if ((new = (t_file *)malloc(sizeof(t_file))) != NULL)
    {
        new->dirent = dirent;
        new->sub = NULL;
    }
    return (new);
}