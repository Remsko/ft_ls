/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_dir.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 13:46:54 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 14:36:28 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		cmp_dir(void *front, void *back)
{
	t_directory *dir1;
	t_directory *dir2;

	dir2 = (t_directory *)back;
	dir1 = (t_directory *)front;
	return (ft_strcmp(dir1->path, dir2->path));
}
