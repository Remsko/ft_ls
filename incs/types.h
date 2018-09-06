/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:30:50 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/06 16:02:08 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# include "ft_ls.h"

typedef struct  s_options
{
    unsigned char   flags;
}               t_options;

typedef struct  s_target
{
    struct stat     stat;
    char            *name;
    char            *path;
}               t_target;

typedef struct  s_infos
{
    char            *mode;
    unsigned long   link;
    char            *uid;
    char            *gid;
    unsigned long   size;
    unsigned long   blocks;
    char            *time;
}               t_infos;

typedef struct  s_directory
{
    t_slist         *list;
    char            *path;
    unsigned long   total;
}               t_directory;

#endif