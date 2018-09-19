/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_stat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 19:07:35 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/18 13:12:32 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	error_stat(t_buffer *buf, char *path)
{
	buffer_loop(buf, "ft_ls: ", 7);
	buffer_print(buf);
	perror(path);
	buf->index = 0;
}
