/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_majorminor.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 10:33:29 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/14 10:39:42 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	display_majorminor(t_buffer *buf, dev_t st_rdev)
{
	char	*number;
	int		nb_len;
	int		spaces;

	nb_len = ft_intlen(major(st_rdev));
	spaces = 2 - nb_len;
	while (spaces-- > 0)
		buffer_loop(buf, " ", 1);
	number = ft_itoa(major(st_rdev));
	buffer_loop(buf, number, nb_len);
	ft_strdel(&number);
	buffer_loop(buf, ", ", 2);
	nb_len = ft_intlen(minor(st_rdev));
	spaces = 3 - nb_len;
	while (spaces-- > 0)
		buffer_loop(buf, " ", 1);
	number = ft_itoa(minor(st_rdev));
	buffer_loop(buf, number, nb_len);
	ft_strdel(number);
	buffer_loop(buf, " ", 1);
}
