/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:30:50 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 14:24:26 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# include "ft_ls.h"

typedef struct		s_options
{
	unsigned char	flags;
	unsigned char	utils;
}					t_options;

typedef struct		s_infos
{
	char			*mode;
	char			*uid;
	char			*gid;
	char			*time;
}					t_infos;

typedef struct		s_target
{
	struct stat		st;
	t_infos			*infos;
	char			*name;
	char			*path;
}					t_target;

typedef struct		s_max
{
	long			link;
	long			size;
	long			uid;
	long			gid;
}					t_max;

typedef struct		s_directory
{
	struct stat		st;
	t_slist			*list;
	t_max			max;
	long			total;
	char			*path;
}					t_directory;

#endif
