/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infos_time.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 22:11:46 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 18:45:14 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char    *infos_time(time_t t)
{
    char            *ret;
    long            dif;
    time_t          now;

    now = time(NULL);
    ret = ctime((const time_t *)&t);
    dif = (long)(now - t);
    if (dif > SEC_6_MONTHS || dif < 0)
        ret[0] = '1';
    else
        ret[0] = '0';
    return (ft_strdup(ret));
}