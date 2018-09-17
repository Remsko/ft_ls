/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 12:59:59 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/17 13:26:50 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static void	display_symbolink(t_buffer *buf, char *path)
{
	char	link[256];
	int		len;

	buffer_loop(buf, " -> ", 4);
	if ((len = readlink(path, link, 256)) != -1)
		link[len] = '\0';
	buffer_loop(buf, link, ft_strlen(link));
}

void		display_file(t_target *target, t_buffer *buf, t_max *max, t_options *opt)
{
	opt->utils |= UTILS_PRINT;
	if (opt->flags & FLAG_l)
	{
		infos_extended(target->path, &target->infos->mode[10]);
		display_infos(&target->st, target->infos, buf, max);
	}
	buffer_loop(buf, target->name, ft_strlen(target->name));
	if (opt->flags & FLAG_l && S_ISLNK(target->st.st_mode))
		display_symbolink(buf, target->path);
	buffer_loop(buf, "\n", 1);
}
