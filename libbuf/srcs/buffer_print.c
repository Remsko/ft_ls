/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 16:44:56 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/17 12:34:36 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libbuf.h"

inline void	buffer_print(t_buffer *buf)
{
	write(buf->fd, (const void *)buf->array, (size_t)buf->index);
}
