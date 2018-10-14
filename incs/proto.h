/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:32:07 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/14 10:39:06 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTO_H
# define PROTO_H

# include "ft_ls.h"

void		parsing_options(t_options *opt, char *av);

void		parsing_arg(t_options *opt, char ***av_ptr);

void		process_args(t_slist **list, t_buffer *buf, t_options *opt, \
		char **av);

void		process_dir(t_directory *directory, t_buffer *buf, t_options *opt);

void		process_sort(t_slist **list, t_options *opt, t_bool isdir);

void		display_list(t_slist *list, t_buffer *buf, t_max *max, \
		t_options *opt);

void		display_file(t_target *target, t_buffer *buf, t_max *max, \
		t_options *opt);

void		display_directories(t_slist *directory, t_buffer *buf, \
		t_options *opt);

void		display_infos(struct stat *st, t_infos *infos, t_buffer *buf, \
		t_max *max, t_options *opt);

void		display_mode(t_buffer *buf, char *mode);

void		display_time(t_buffer *buf, char *time);

void		display_link(t_buffer *buf, long max, long link);

void		display_size(t_buffer *buf, long max, long size);

void		display_gid(t_buffer *buf, long max, char *uid);

void		display_uid(t_buffer *buf, long max, char *uid);

void		display_total(t_buffer *buf, int total);

void		display_path(t_buffer *buf, char *path, t_options *opt);

void		display_majorminor(t_buffer *buf, dev_t st_rdev);

void		error_usage(char c);

void		error_directory(t_buffer *buf, char *dir);

void		error_malloc();

void		error_stat(t_buffer *buf, char *path);

t_infos		*new_infos(struct stat *sd);

t_target	*new_target(t_buffer *buf, char *d_path, char *d_name);

t_directory	*new_directory(t_buffer *buf, char *path);

char		*new_path(char *start, char *end);

char		infos_type(mode_t mode);

char		*infos_mode(mode_t mode);

char		*infos_gid(gid_t gid);

char		*infos_uid(uid_t uid);

char		*infos_time(time_t time);

void		infos_extended(char *path, char *mode_acl);

void		infos_permi_usr(mode_t mode, char *m);

void		infos_permi_grp(mode_t mode, char *m);

void		infos_permi_oth(mode_t mode, char *m);

int			cmp_file(void *front, void *back);

int			cmp_file_time(void *front, void *back);

int			cmp_file_size(void *front, void *back);

int			cmp_file_change_time(void *front, void *back);

int			cmp_dir(void *front, void *back);

int			cmp_dir_time(void *front, void *back);

int			cmp_dir_size(void *front, void *back);

int			cmp_dir_change_time(void *front, void *back);

void		utils_setup_max(struct stat *st, t_infos *infos, t_max *max);

void		utils_cleaner(void *content);

void		utils_sweeper(void *content);

void		utils_add_directory(t_slist **directories, t_buffer *buf, \
		char *path);

t_bool		utils_check_dotdir(char *name);

t_bool		utils_check_begindot(char *name, t_options *opt);

#endif
