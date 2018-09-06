/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_directory.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 13:48:36 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/06 13:19:03 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    display_directory(t_slist *directory, int recu)
{
    t_directory     *tmp;

    while (directory != NULL)
    {
        tmp = (t_directory *)directory->content;
        ft_putstr(tmp->path);
        ft_putstr(":\n");
        display_list(tmp->list, recu);
        directory = directory->next;
    }
}