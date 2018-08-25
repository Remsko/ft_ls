/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:32:07 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/25 23:11:43 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTO_H
# define PROTO_H

# include "ft_ls.h"

/* PARSING */

t_bool  parsing_options(t_options *opt, char *av);

t_bool  parsing_arg(t_options *opt, char **av);

/* PROCESS */

void    process_filling();

void    process_dir(t_slist **directories, char *target);

/* DISPLAY */

void    display_list();

/* ERROR */

void    error_usage(char c);

void    error_directory(char *dir);

void    error_malloc();

/* NEW */

t_object    *new_object(struct dirent *dirent);

#endif