/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 19:46:20 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/06 14:57:57 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    parsing_arg(t_options *opt, char **av)
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
            error_usage('-');
        }
        parsing_options(opt, *av);
    }
    opt->targets = av;
}