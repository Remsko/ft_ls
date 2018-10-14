/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_infos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:13:21 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/14 10:47:57 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void		display_infos(t_target *target, t_buffer *buf, t_max *max, \
		t_options *opt)
{
	display_mode(buf, target->infos->mode);
	display_link(buf, max->link, (long)target->st.st_nlink);
	if ((opt->flags & FLAG_g) == 0)
		display_uid(buf, max->uid, target->infos->uid);
	if ((opt->flags & FLAG_o) == 0)
		display_gid(buf, max->gid, target->infos->gid);
	if (S_ISCHR(st->st_mode))
		display_majorminor(buf, target->st.st_rdev);
	else
		display_size(buf, max->size, (long)target->st.st_size);
	display_time(buf, traget->infos->time);
}
