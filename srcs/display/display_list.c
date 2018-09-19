/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 20:58:58 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/19 12:45:42 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static t_bool	check_pointdir(char *name)
{
	static const char point = '.';
	static const char zero = '\0';

	if (name[0] == point && (name[1] == zero
				|| (name[1] == point && name[2] == zero)))
		return (TRUE);
	return (FALSE);
}

void			display_list(t_slist *list, t_buffer *buf, t_max *max, t_options *opt)
{
	t_slist		*directories;
	t_target	*target;

	directories = NULL;
	while (list != NULL)
	{
		target = (t_target *)list->content;
		if (S_ISDIR(target->st.st_mode) || S_ISLNK(target->st.st_mode))
		{
			if (check_pointdir(target->name) == FALSE && opt->flags & FLAG_R)
				utils_add_directory(&directories, buf, target->path);
		}
		display_file(target, buf, max, opt);
		list = list->next;
	}
	opt->utils |= UTILS_ARGS;
	display_directories(directories, buf, opt);
}
