/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infos_gid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 20:52:44 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 12:54:01 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char    *infos_gid(gid_t gid)
{
    struct group *grp;

    if ((grp = getgrgid(gid)) == NULL)
        return (NULL);
    return (ft_strdup(grp->gr_name));
}
