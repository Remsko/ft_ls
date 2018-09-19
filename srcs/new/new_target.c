/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_target.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 21:33:11 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/18 13:15:01 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_target	*new_target(t_buffer *buf, char *d_path, char *d_name)
{
	t_target	*new;

	if ((new = (t_target *)malloc(sizeof(t_target))) == NULL)
		error_malloc();
	new->name = ft_strdup(d_name);
	new->path = new_path(d_path, new->name);
	if (lstat(new->path, &new->st) == -1)
	{
		error_stat(buf, new->path);
		ft_memdel((void **)&new->name);
		ft_memdel((void **)&new->path);
		ft_memdel((void **)&new);
		return (NULL);
	}
	new->infos = new_infos(&new->st);
	return (new);
}
