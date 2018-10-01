/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer_empty.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 17:17:00 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/17 12:33:50 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libbuf.h"

inline void	buffer_empty(t_buffer *buf)
{
	write(buf->fd, (const void *)buf->array, (size_t)BUFFER_SIZE);
	buf->index = 0;
}
