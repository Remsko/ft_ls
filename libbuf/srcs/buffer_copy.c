/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 16:44:59 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/17 12:33:58 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libbuf.h"

inline void	buffer_copy(t_buffer *buf, const char *src, const int size)
{
	memcpy((void *)&buf->array[buf->index], (const void *)src, (size_t)size);
	buf->index += size;
}
