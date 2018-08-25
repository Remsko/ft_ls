/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_options.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 20:02:17 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/25 20:29:26 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_bool  parsing_options(t_options *opt, char *av)
{
    const char  *flags;
    char        *tmp;

    flags = "lRart";
    while (*(++av) != '\0')
    {
        if ((tmp = ft_strchr(flags, *av)) == NULL)
        {
            opt->error = *av;
			return (FALSE);
        }
        opt->flags |= (1 << (tmp - flags));
    }
    return (TRUE);
}