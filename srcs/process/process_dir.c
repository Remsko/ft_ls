/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:11:59 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/14 10:51:08 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	process_dir(t_directory *directory, t_buffer *buf, t_options *opt)
{
	DIR				*dir;
	struct dirent	*dirent;
	t_target		*target;
	t_slist			*new;

	if ((dir = opendir(directory->path)) == NULL)
		return (error_directory(buf, directory->path));
	while ((dirent = readdir(dir)) != NULL)
	{
		if (utils_check_begindot(dirent->d_name, opt) == TRUE \
		&& (target = new_target(buf, directory->path, dirent->d_name)) != NULL)
		{
			if ((new = slist_new((void *)target)) == NULL)
				error_malloc();
			slist_add_start(&directory->list, new);
			utils_setup_max(&target->st, target->infos, &directory->max);
			directory->total += (long)target->st.st_blocks;
		}
	}
	directory->max.link = ft_intlen(directory->max.link);
	directory->max.size = ft_intlen(directory->max.size);
	closedir(dir);
}
