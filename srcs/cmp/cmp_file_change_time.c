/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_file_change_time.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:41:33 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/14 10:30:56 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		cmp_file_change_time(void *front, void *back)
{
	t_target *tar1;
	t_target *tar2;

	tar1 = (t_target *)front;
	tar2 = (t_target *)back;
	if (tar1->st.st_ctime < tar2->st.st_ctime)
		return (1);
	else if (tar1->st.st_ctime > tar2->st.st_ctime)
		return (-1);
	else
	{
		if (tar1->st.st_ctimespec.tv_sec < tar2->st.st_ctimespec.tv_sec)
			return (1);
		if (tar1->st.st_ctimespec.tv_sec > tar2->st.st_ctimespec.tv_sec)
			return (-1);
		else
		{
			if (tar1->st.st_ctimespec.tv_nsec < tar2->st.st_ctimespec.tv_nsec)
				return (1);
			if (tar1->st.st_ctimespec.tv_nsec > tar2->st.st_ctimespec.tv_nsec)
				return (-1);
			else
				return (ft_strcmp(tar1->name, tar2->name));
		}
	}
}
