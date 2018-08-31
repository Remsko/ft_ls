/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_filling.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 20:51:16 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/31 18:49:10 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    process_filling(t_slist **list, t_options *opt)
{
    t_target *new;

    new = NULL;
    if (opt->targets == NULL || *opt->targets == NULL)
    {
        new = new_target(".");
        new->name = ft_strdup(".");
        slist_add_start(list, slist_new((void *)new));
    }
    else
    {
        while (*opt->targets != NULL)
        {
            new = new_target(*opt->targets);
            new->name = ft_strdup(*opt->targets);
            slist_add_start(list, slist_new((void *)new));
            ++opt->targets;
        }
    }
}