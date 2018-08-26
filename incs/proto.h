/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:32:07 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/26 22:21:59 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTO_H
# define PROTO_H

# include "ft_ls.h"

/* PARSING */

t_bool parsing_options(t_options *opt, char *av);

t_bool parsing_arg(t_options *opt, char **av);

/* PROCESS */

void process_filling();

void process_dir(t_slist **directories, char *target);

/* DISPLAY */

void display_list();

/* ERROR */

void error_usage(char c);

void error_directory(char *dir);

void error_malloc();

void error_stat();

/* NEW */

t_file *new_file(struct dirent *dirent);

t_infos *new_infos(char *path);

/* INFOS */

char    *infos_gid(gid_t gid);

char    *infos_mode(mode_t mode);

void    infos_permi_usr(mode_t mode, char *m);

void    infos_permi_grp(mode_t mode, char *m);

void    infos_permi_oth(mode_t mode, char *m);

char    *infos_time(time_t time);

char    infos_type(mode_t mode);

char    *infos_uid(uid_t uid);

#endif