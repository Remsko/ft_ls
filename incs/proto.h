/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:32:07 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/10 20:42:51 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTO_H
#define PROTO_H

#include "ft_ls.h"

/* PARSING */

void parsing_options(t_options *opt, char *av);

void parsing_arg(t_options *opt, char ***av_ptr);

/* PROCESS */

void process_filling(t_slist **list, t_options *opt, char **av);

void process_dir(t_directory *directory);

void    process_sort(t_slist **list, t_options *opt);

/* DISPLAY */

void display_list(t_slist *list, t_options *opt);

void display_file(t_target *target, t_options *opt);

void display_directory(t_slist *directory, t_options *opt);

void    display_infos(t_infos *infos, t_options *opt);

void    display_time(t_infos *infos, t_options *opt);

/* ERROR */

void error_usage(char c);

void error_directory(char *dir);

void error_malloc();

void error_stat(char *path);

/* NEW */

//t_file *new_file(struct dirent *dirent);

t_infos new_infos(struct stat *sd);

t_target *new_target(char *path);

t_directory *new_directory(char *path);

char *new_path(char *start, char *end);

/* INFOS */

char infos_type(mode_t mode);

char *infos_mode(mode_t mode);

char *infos_gid(gid_t gid);

char *infos_uid(uid_t uid);

char *infos_time(time_t time);

void infos_acl(char *path, char *mode_acl);

void infos_permi_usr(mode_t mode, char *m);

void infos_permi_grp(mode_t mode, char *m);

void infos_permi_oth(mode_t mode, char *m);

#endif