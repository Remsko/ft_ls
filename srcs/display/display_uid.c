/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_uid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 14:16:32 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/17 13:14:04 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	display_uid(t_buffer *buf, long max, char *uid)
{
	long	tmp;
	int		len;

	len = ft_strlen(uid);
	buffer_loop(buf, uid, len);
	tmp = max - (long)len;
	while (tmp-- > 0)
		buffer_loop(buf, " ", 1);
	buffer_loop(buf, "  ", 2);
}
