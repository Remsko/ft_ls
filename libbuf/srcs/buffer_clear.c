/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 17:09:41 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/17 12:34:10 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libbuf.h"

inline void	buffer_clear(t_buffer *buf)
{
	buf->fd = 1;
	buf->index = 0;
	bzero((void *)buf->array, (size_t)BUFFER_SIZE);
}
