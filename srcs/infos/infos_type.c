/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infos_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 15:21:03 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 18:26:01 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	infos_type(mode_t mode)
{
	int type;

	type = mode & S_IFMT;
	if (type == S_IFREG)
		return ('-');
	else if (type == S_IFDIR)
		return ('d');
	else if (type == S_IFLNK)
		return ('l');
	else if (type == S_IFIFO)
		return ('p');
	else if (type == S_IFSOCK)
		return ('s');
	else if (type == S_IFCHR)
		return ('c');
	else if (type == S_IFBLK)
		return ('b');
	else
		return ('?');
}
