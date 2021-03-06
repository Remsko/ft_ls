/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_directory.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 13:12:08 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/18 13:15:53 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_directory		*new_directory(t_buffer *buf, char *path)
{
	t_directory *new;

	if ((new = (t_directory *)malloc(sizeof(t_directory))) != NULL)
	{
		ft_bzero((void *)&new->max, sizeof(t_max));
		if (lstat(path, &new->st) == -1)
			error_stat(buf, path);
		new->path = ft_strdup(path);
		new->list = NULL;
		new->total = 0;
	}
	return (new);
}
