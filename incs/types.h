/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:30:50 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 14:00:26 by rpinoit          ###   ########.fr       */
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
    unsigned long             mtime;
    unsigned long             blocks;
    unsigned long             link;
    unsigned long             size;
}               t_infos;

typedef struct  s_target
{
    //struct stat     stat;
    t_infos         *infos;
    char            *name;
    char            *path;
}               t_target;

typedef struct  s_max
{
    unsigned long             link;
    unsigned long             size;
    unsigned long             uid;
    unsigned long             gid;
}               t_max;

typedef struct  s_directory
{
    struct stat     st;
    t_slist         *list;
    char            *path;
    t_max           max;
    int             total;
}               t_directory;

#endif