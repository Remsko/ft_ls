/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_directory.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 13:48:36 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/31 20:00:13 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    display_directory(t_slist *directory, int recu)
{
    t_slist     *tmp;

    while (directory != NULL)
    {
        tmp = (t_slist *)directory->content;
        display_list(tmp, recu);
        directory = directory->next;
    }
}