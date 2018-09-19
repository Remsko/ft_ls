/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_directory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:32:51 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/18 13:11:03 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	error_directory(t_buffer *buf, char *dir)
{
	buffer_loop(buf, "ft_ls: ", 7);
	buffer_print(buf);
	perror(dir);
	buf->index = 0;
}
