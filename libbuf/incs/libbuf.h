/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libbuf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 16:28:52 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/09 13:34:45 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBBUF_H
# define LIBBUF_H

# include <unistd.h>
# include <string.h>

# define BUFFER_SIZE 4096

typedef struct	s_buffer
{
	char		array[BUFFER_SIZE];
	int			index;
	int			fd;
}				t_buffer;

void			buffer_copy(t_buffer *buf, const char *src, const int size);
void			buffer_empty(t_buffer *buf);
void			buffer_loop(t_buffer *buf, const char *src, const int size);
void			buffer_print(t_buffer *buf);
void			buffer_clear(t_buffer *buf);

#endif
