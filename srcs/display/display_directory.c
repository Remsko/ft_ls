/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_directory.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 13:48:36 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/17 17:30:59 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void		display_directories(t_slist *directories, t_buffer *buf, t_options *opt)
{
	t_directory	*directory;
	t_slist		*tmp;

	process_sort(&directories, opt, TRUE);
	tmp = directories;
	while (tmp != NULL)
	{
		directory = (t_directory *)tmp->content;
		display_path(buf, directory->path, opt);
		process_dir(directory, opt);
		process_sort(&directory->list, opt, FALSE);
		if (opt->flags & FLAG_l && directory->list != NULL)
			display_total(buf, directory->total);
		display_list(directory->list, buf, &directory->max, opt);
		tmp = tmp->next;
	}
	slist_delete(&directories, utils_sweeper);
}
