/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_file_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 12:49:04 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/14 11:08:25 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		cmp_file_size(void *front, void *back)
{
	t_target *tar1;
	t_target *tar2;

	tar1 = (t_target *)front;
	tar2 = (t_target *)back;
	if (tar1->st.st_size < tar2->st.st_size)
		return (1);
	else if (tar1->st.st_size > tar2->st.st_size)
		return (-1);
	return (ft_strcmp(tar1->path, tar2->path));
}
