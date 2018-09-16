/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_infos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:13:21 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 18:36:20 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static void	display_majorminor(dev_t st_rdev)
{
	int tmp;

	tmp = 2 - ft_intlen(major(st_rdev));
	while (tmp-- > 0)
		ft_putchar(' ');
	ft_putnbr(major(st_rdev));
	ft_putstr(", ");
	tmp = 3 - ft_intlen(minor(st_rdev));
	while (tmp-- > 0)
		ft_putchar(' ');
	ft_putnbr(minor(st_rdev));
	ft_putstr(" ");
}

void		display_infos(struct stat *st, t_infos *infos,
		t_max *max, t_options *opt)
{
	display_mode(infos->mode);
	display_link(max->link, (long)st->st_nlink);
	display_uid(max->uid, infos->uid);
	display_gid(max->gid, infos->gid);
	if (S_ISCHR(st->st_mode))
		display_majorminor(st->st_rdev);
	else
		display_size(max->size, (long)st->st_size);
	display_time(infos->time, opt);
}
