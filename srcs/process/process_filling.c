/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_filling.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 20:51:16 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/27 13:01:19 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    process_filling(t_slist **list, t_options *opt)
{
    if (opt->targets == NULL || *opt->targets == NULL)
    {
        process_dir(list, ".");
        while (*list != NULL)
        {
            t_file *file = (t_file *)(*list)->content;
            printf("file = %s\n", file->dirent->d_name);
            *list = (*list)->next;
        }
    }
    else
    {
        while (*opt->targets != NULL)
        {
            printf("%s\n", *opt->targets);
            process_dir(list, *opt->targets);
            ++opt->targets;
        }
        while (*list != NULL)
        {
            t_file *file = (t_file *)(*list)->content;
            printf("file = %s\n", file->dirent->d_name);
            *list = (*list)->next;
        }
    }
    (void)list;
    (void)opt;
}