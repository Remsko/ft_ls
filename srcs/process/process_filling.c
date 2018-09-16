/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_filling.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 20:51:16 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 17:04:23 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static void	add_directory(t_slist **directories, char *path)
{
	t_directory *directory;
	t_slist		*new;

	if ((directory = new_directory(path)) == NULL)
		error_malloc();
	if ((new = slist_new((void *)directory)) == NULL)
		error_malloc();
	slist_add_start(directories, new);
}

static void	handle_args(t_slist **list, t_max *max, char **av)
{
	t_target	*target;
	t_slist		*new;

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

void		process_filling(t_slist **directories, t_options *opt, char **av)
{
	t_target	*target;
	t_slist		*list;
	t_slist		*memory;
	t_max		max;

	list = NULL;
	ft_bzero((void *)&max, sizeof(t_max));
	if (av == NULL || *av == NULL)
		add_directory(directories, ".");
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
				add_directory(directories, target->path);
			else
				display_file(target, &max, opt);
			list = list->next;
		}
		slist_delete(&memory, utils_cleaner);
	}
}