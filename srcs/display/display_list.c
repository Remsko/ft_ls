/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 20:58:58 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/28 13:48:13 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    display_list(t_slist *list)
{
    //t_slist     *directory;
    //t_directory *new;
    t_target    *target;

    while (list != NULL)
    {
        target = (t_target *)list->content;
        printf("%s", target->path);
        if (target->stat.st_mode & S_IFDIR)
        {
            printf(" -> directory\n");
            // new = new_directory(target); // create new directory structure;
            // add_slist(&directory, new_slist((void *)new)); //add directory to directory list;
        }
        else
        {
            printf(" -> file\n");
            display_file(target);
        }
        list = list->next;
    }
    //display_directory(directory); and in display directory -> target list -> display list
}