/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_filling.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 20:51:16 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/17 13:26:00 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static void	handle_args(t_slist **list, t_max *max, char **av)
{
	t_target	*target;
	t_slist		*new;

	*list = NULL;
	ft_bzero((void *)max, sizeof(t_max));
	while (*av != NULL)
	{
		if ((target = new_target(NULL, *av)) != NULL)
		{
			if ((new = slist_new((void *)target)) == NULL)
				error_malloc();
			slist_add_start(list, new);
			utils_setup_max(&target->st, target->infos, max);
		}
		++av;
	}
	max->link = ft_intlen(max->link);
	max->size = ft_intlen(max->size);
}

void		process_filling(t_slist **directories, t_buffer *buf, t_options *opt, char **av)
{
	t_target	*target;
	t_slist		*list;
	t_slist		*memory;
	t_max		max;

	if (av == NULL || *av == NULL)
		utils_add_directory(directories, ".");
	else
	{
		if (*av != NULL && *(av + 1) != NULL)
			opt->utils |= UTILS_ARGS;
		handle_args(&list, &max, av);
		process_sort(&list, opt, FALSE);
		memory = list;
		while (list != NULL)
		{
			target = (t_target *)list->content;
			if (S_ISDIR(target->st.st_mode))
				utils_add_directory(directories, target->path);
			else
				display_file(target, buf, &max, opt);
			list = list->next;
		}
		slist_delete(&memory, utils_cleaner);
	}
}
