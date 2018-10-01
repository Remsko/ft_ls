/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer_loop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 17:22:22 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/17 12:33:29 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libbuf.h"

inline void	buffer_loop(t_buffer *buf, const char *src, int size)
{
	int leftover;

	while ((leftover = BUFFER_SIZE - buf->index) < size)
	{
		buffer_copy(buf, src, leftover);
		buffer_empty(buf);
		src += leftover;
		size -= leftover;
	}
	buffer_copy(buf, src, size);
}
