/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_infos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:13:21 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/17 13:14:16 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

/* OPTIMIZE THIS FT PLZ */

static void	display_majorminor(t_buffer *buf, dev_t st_rdev)
{
	int tmp;

	tmp = 2 - ft_intlen(major(st_rdev));
	while (tmp-- > 0)
		buffer_loop(buf, " ", 1);
	/* itoa free plz */
	char *tmp2;

	tmp2 = ft_itoa(major(st_rdev));
	buffer_loop(buf, tmp2, ft_strlen(tmp2));
	free(tmp2);

	buffer_loop(buf, ", ", 2);
	tmp = 3 - ft_intlen(minor(st_rdev));
	while (tmp-- > 0)
		buffer_loop(buf, " ", 1);
	/* itoa free plz */
	
	tmp2 = ft_itoa(minor(st_rdev));
	buffer_loop(buf, tmp2, ft_strlen(tmp2));
	free(tmp2);

	buffer_loop(buf, " ", 1);
}

void		display_infos(struct stat *st, t_infos *infos, t_buffer *buf, t_max *max)
{
	display_mode(buf, infos->mode);
	display_link(buf, max->link, (long)st->st_nlink);
	display_uid(buf, max->uid, infos->uid);
	display_gid(buf, max->gid, infos->gid);
	if (S_ISCHR(st->st_mode))
		display_majorminor(buf, st->st_rdev);
	else
		display_size(buf, max->size, (long)st->st_size);
	display_time(buf, infos->time);
}
