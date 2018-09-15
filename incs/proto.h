/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:32:07 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 13:57:58 by rpinoit          ###   ########.fr       */
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

void process_dir(t_directory *directory, t_options *opt);

void    process_sort(t_slist **list, t_options *opt, t_bool isdir);

/* DISPLAY */

void display_list(t_slist *list, t_max *max, t_options *opt);

void display_file(t_target *target, t_max *max, t_options *opt);

void display_directories(t_slist *directory, t_options *opt);

void    display_infos(t_infos *infos, t_max *max, t_options *opt);

void    display_mode(t_infos *infos, t_max *max, t_options *opt);

void    display_time(t_infos *infos, t_options *opt);

void display_link(t_infos *infos, t_max *max, t_options *opt);

void display_size(t_infos *infos, t_max *max, t_options *opt);

void    display_gid(t_infos *infos, t_max *max, t_options *opt);

void    display_uid(t_infos *infos, t_max *max, t_options *opt);

/* ERROR */

void error_usage(char c);

void error_directory(char *dir);

void error_malloc();

void error_stat(char *path);

/* NEW */

//t_file *new_file(struct dirent *dirent);

t_infos *new_infos(struct stat *sd);

t_target    *new_target(char *d_path, char *d_name);

t_directory *new_directory(char *path);

char *new_path(char *start, char *end);

/* INFOS */

char infos_type(mode_t mode);

char *infos_mode(mode_t mode);

char *infos_gid(gid_t gid);

char *infos_uid(uid_t uid);

char *infos_time(time_t time);

void infos_extended(char *path, char *mode_acl);

void infos_permi_usr(mode_t mode, char *m);

void infos_permi_grp(mode_t mode, char *m);

void infos_permi_oth(mode_t mode, char *m);

/* CMP */

int     cmp_file(void *front, void *back);

int     cmp_file_time(void *front, void *back);

int     cmp_dir(void *front, void *back);

int     cmp_dir_time(void *front, void *back);

#endif