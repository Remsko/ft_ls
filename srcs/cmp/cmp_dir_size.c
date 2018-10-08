/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_dir_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 12:49:12 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/08 12:54:20 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		cmp_dir_size(void *front, void *back)
{
	t_directory *dir1;
	t_directory *dir2;

	dir2 = (t_directory *)back;
	dir1 = (t_directory *)front;
    if (dir1->st.st_blocks < dir2->st.st_blocks)
		return (1);
	else if (dir1->st.st_blocks > dir2->st.st_blocks)
		return (-1);
    return (ft_strcmp(dir1->path, dir2->path));
}