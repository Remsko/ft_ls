/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_gid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 14:12:49 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/17 13:13:24 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	display_gid(t_buffer *buf, long max, char *gid)
{
	long	tmp;
	int		len;

	len = ft_strlen(gid);
	buffer_loop(buf, gid, len);
	tmp = max - (long)len;
	while (tmp-- > 0)
		buffer_loop(buf, " ", 1);
	buffer_loop(buf, "  ", 2);
}
