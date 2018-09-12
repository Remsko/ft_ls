/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:30:50 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/12 11:40:01 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# include "ft_ls.h"

typedef struct  s_options
{
    unsigned char   flags;
    unsigned char   utils;
}               t_options;

typedef struct  s_infos
{
    char            *mode;
    char            *uid;
    char            *gid;
    char            *time;
    int             blocks;
    int             link;
    int             size;
}               t_infos;

typedef struct  s_target
{
    struct stat     stat;
    //t_infos         infos;
    char            *name;
    char            *path;
}               t_target;

typedef struct  s_directory
{
    t_slist         *list;
    char            *path;
    int             total;
    int             maxlink;
    int             maxsize;
    int             maxuid;
    int             maxgid;
}               t_directory;

#endif