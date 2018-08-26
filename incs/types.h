/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:30:50 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/26 20:42:50 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# include "ft_ls.h"

typedef struct  s_options
{
    char            **targets;
    unsigned char   flags;
    char            error;
}               t_options;

typedef struct  s_infos
{
    char            *mode;
    unsigned long   link;
    char            *uid;
    char            *gid;
    unsigned long   size;
    char            *time;
}               t_infos;

typedef struct  s_file
{
    struct dirent   *dirent;
    t_slist         *sub;
}               t_file;

#endif