/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_path.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:30:11 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/14 10:32:12 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	display_path(t_buffer *buf, char *path, t_options *opt)
{
	if (opt->utils & UTILS_ARGS)
	{
		if (opt->utils & UTILS_PRINT)
			buffer_loop(buf, "\n", 1);
		opt->utils |= UTILS_PRINT;
		buffer_loop(buf, path, ft_strlen(path));
		buffer_loop(buf, ":\n", 2);
	}
}
