/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_dir_change_time.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:38:50 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/14 10:30:58 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		cmp_dir_change_time(void *front, void *back)
{
	t_directory *dir1;
	t_directory *dir2;

	dir1 = (t_directory *)front;
	dir2 = (t_directory *)back;
	if (dir1->st.st_ctime < dir2->st.st_ctime)
		return (1);
	else if (dir1->st.st_ctime > dir2->st.st_ctime)
		return (-1);
	else
	{
		if (dir1->st.st_ctimespec.tv_sec < dir2->st.st_ctimespec.tv_sec)
			return (1);
		if (dir1->st.st_ctimespec.tv_sec > dir2->st.st_ctimespec.tv_sec)
			return (-1);
		else
		{
			if (dir1->st.st_ctimespec.tv_nsec < dir2->st.st_ctimespec.tv_nsec)
				return (1);
			if (dir1->st.st_ctimespec.tv_nsec > dir2->st.st_ctimespec.tv_nsec)
				return (-1);
			else
				return (ft_strcmp(dir1->path, dir2->path));
		}
	}
}
