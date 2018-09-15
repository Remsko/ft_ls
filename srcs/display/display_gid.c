/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_gid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 14:12:49 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 15:47:12 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    display_gid(long max, char *gid)
{
    long tmp;

    ft_putstr(gid);
    if ((tmp = max - ft_strlen(gid)) > 0)
        while (tmp-- > 0)
            ft_putchar(' ');
    ft_putstr("  ");
}