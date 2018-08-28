/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 20:58:58 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/28 13:06:49 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    display_list(t_slist *list)
{
    //t_slist     *directory;
    t_target    *target;

    while (list != NULL)
    {
        target = (t_target *)list->content;
        printf("%s\n", target->path);
        if (target->stat.st_mode & S_IFDIR)
        {
            //add directory to directories list;
        }
        else
            display_file(target);
        list = list->next;
    }
    //display_directy(directory);
}