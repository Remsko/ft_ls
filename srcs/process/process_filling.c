/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_filling.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 20:51:16 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/28 11:17:27 by rpinoit          ###   ########.fr       */
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
        slist_add_start(list, slist_new((void *)new));
    }
    else
    {
        while (*opt->targets != NULL)
        {
            new = new_target(*opt->targets);
            slist_add_start(list, slist_new((void *)new));
            ++opt->targets;
        }
    }
}