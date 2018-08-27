/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infos_time.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 22:11:46 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/27 20:37:04 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

//static void   cut_day()

//static void   cut_second()

char    *infos_time(time_t t)
{
    const time_t    *ct;
    char            *ret;
    long            dif;
    time_t          now;

    now = time(NULL);
    ct = &t;
    ret = ctime(ct);
    dif = (long)now - t;
    if (dif > (long)SEC_6_MONTHS || dif < 0)
        ret[0] = '1';
    else
        ret[0] = '0';
    printf("%s\n", ret);
    return (ret);
}