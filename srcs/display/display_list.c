/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 20:58:58 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/17 13:15:05 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static t_bool	check_pointdir(char *name)
{
	if (name[0] == '.' && (name[1] == '\0'
				|| (name[1] == '.' && name[2] == '\0')))
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
		if (S_ISDIR(target->st.st_mode) && opt->flags & FLAG_R)
		{
			if (check_pointdir(target->name) == FALSE)
			utils_add_directory(&directories, target->path);
		}
		display_file(target, buf, max, opt);
		list = list->next;
	}
	opt->utils |= UTILS_ARGS;
	display_directories(directories, buf, opt);
}
