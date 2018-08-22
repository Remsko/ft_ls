/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 12:41:18 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/22 13:01:26 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static t_bool get_options(t_options *opt, char *arg)
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
        else
        {
            opt->error = *arg;
            return (FALSE);
        }
        ++arg;
    }
    return (TRUE);
}

t_bool parser(char **argv, t_options *opt)
{
    while (*argv != NULL)
    {
        if (**argv == '-')
        {
            if (*(*argv + 1) == '-')
            {
                if (*(*argv + 2) != '\0')
                {
                    opt->error = '-';
                    return (FALSE);
                }
                else
                    break;
            }
            else if (get_options(opt, *argv + 1) == FALSE)
                return (FALSE);
        }
        else
            break;
        ++argv;
    }
    return (TRUE);
}