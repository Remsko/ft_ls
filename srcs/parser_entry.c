/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_entry.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 18:19:40 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/21 09:56:21 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static void get_options(t_options *opt, char *arg)
{
    while (*arg != '\0')
    {
        if (*arg == 'l')
            opt->flags |= 1;
        else if (*arg == 'R')
            opt->flags |= 1 << 1;
        else if (*arg == 'a')
            opt->flags |= 1 << 2;
        else if (*arg == 'r')
            opt->flags |= 1 << 3;
        else if (*arg == 't')
            opt->flags |= 1 << 4;
        ++arg;
    }
}

void parser_entry(char **argv, t_options *opt)
{

    while (*argv != NULL)
    {
        if (*argv[0] == '-')
        {
            get_options(opt, *argv);
        }
        else
            break;
        ++argv;
    }
}