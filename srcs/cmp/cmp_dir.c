/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_dir.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 13:46:54 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 13:57:30 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int     cmp_dir(void *front, void *back)
{
    t_directory *dir1 = (t_directory *)front;
    t_directory *dir2 = (t_directory *)back;
    return (ft_strcmp(dir1->path, dir2->path));
}