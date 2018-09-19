/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_add_directory.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 09:20:10 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/18 13:16:26 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	utils_add_directory(t_slist **directories, t_buffer *buf, char *path)
{
	t_directory *directory;
	t_slist		*new;

	if ((directory = new_directory(buf, path)) == NULL)
		error_malloc();
	if ((new = slist_new((void *)directory)) == NULL)
		error_malloc();
	slist_add_start(directories, new);
}