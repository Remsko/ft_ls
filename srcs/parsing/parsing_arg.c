/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 19:46:20 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/28 10:42:20 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

// if (ft_strcmp(*av, "-") == 0)
//      break;
// if (ft_strcmp(*av, "--") == 0)
//      break (++av);
// if (ft_strcmp(*av, ))

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