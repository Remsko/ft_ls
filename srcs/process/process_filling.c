/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_filling.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 20:51:16 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/12 20:44:36 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void process_filling(t_slist **list, t_options *opt, char **av)
{
    t_target *new;

    new = NULL;
    (void)opt;
    if (av == NULL || *av == NULL)
    {
        new = new_target(NULL, ".");
        slist_add_start(list, slist_new((void *)new));
    }
    else
    {
        //if (*av != NULL && *(av + 1) != NULL)
        //    opt->flags |= FLAG_PATH;
        while (*av != NULL)
        {
            new = new_target(NULL, *av);
            slist_add_start(list, slist_new((void *)new));
            ++av;
        }
    }
}