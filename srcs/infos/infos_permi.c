/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infos_permi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 16:02:19 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/27 13:35:55 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void infos_permi_usr(mode_t mode, char *m)
{
    m[0] = mode & S_IRUSR ? 'r' : '-';
    m[1] = mode & S_IWUSR ? 'w' : '-';
    m[2] = mode & S_IXUSR ? 'x' : '-';
    if (mode & S_ISUID)
        m[2] = m[2] == 'x' ? 's' : 'S';
}

void infos_permi_grp(mode_t mode, char *m)
{
    m[0] = mode & S_IRGRP ? 'r' : '-';
    m[1] = mode & S_IWGRP ? 'w' : '-';
    m[2] = mode & S_IXGRP ? 'x' : '-';

    if (mode & S_ISGID)
        m[2] = m[2] == 'x' ? 's' : 'S';
}

void infos_permi_oth(mode_t mode, char *m)
{
    m[0] = mode & S_IROTH ? 'r' : '-';
    m[1] = mode & S_IWOTH ? 'w' : '-';
    m[2] = mode & S_IXOTH ? 'x' : '-';
    if (mode & S_ISVTX)
        m[2] = m[2] == 'x' ? 't' : 'T';
}