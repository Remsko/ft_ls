/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_entry.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 18:19:40 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/20 18:47:31 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static void get_options(t_options *opt, char *arg)
{
    while (*arg != '\0')
    {
        if (*arg == 'l')
            opt->l = TRUE;
        else if (*arg == 'R')
            opt->R = TRUE;
        else if (*arg == 'a')
            opt->a = TRUE;
        else if (*arg == 'r')
            opt->r = TRUE;
        else if (*arg == 't')
            opt->t = TRUE;
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