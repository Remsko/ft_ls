/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 19:46:20 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/27 21:01:12 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_bool parsing_arg(t_options *opt, char **av)
{
    while (*(++av) != NULL)
    {
        if (**av != '-' || *(*av + 1) == '\0')
            break;
        else if (*(*av + 1) == '-')
        {
            if (*(*av + 2) == '\0')
            {
                ++av;
                break;
            }
            opt->error = '-';
            return (FALSE);
        }
        else if (parsing_options(opt, *av) == FALSE)
            return (FALSE);
    }
    opt->targets = av;
    return (TRUE);
}